
#ifndef ESP8266Ping_H
#define ESP8266Ping_H

#include <Arduino.h>
#include <ESP8266WiFi.h>

extern "C" {
  #include <ping.h>
}

#ifdef ENABLE_DEBUG_PING
  #define DEBUG_PING(...) Serial.printf(__VA_ARGS__)
#else
  #define DEBUG_PING(...)
#endif

class PingClass {
  public:
    PingClass();

    bool ping(IPAddress dest,   unsigned int count = 5);
    bool ping(const char* host, unsigned int count = 5);

    int minTime();
    int averageTime();
    int maxTime();

  protected:
    static void _ping_sent_cb(void *opt, void *pdata);
    static void _ping_recv_cb(void *opt, void *pdata);

    IPAddress _dest;
    ping_option _options;

    static byte _expected_count, _errors, _success;
    static uint _min_time, _avg_time, _max_time;
};

#include "ESP8266Ping.impl.h"
PingClass Ping;

#endif
