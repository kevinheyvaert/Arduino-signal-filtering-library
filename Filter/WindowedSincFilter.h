// Arduino Signal Filtering Library
// Copyright 2012-2013 Jeroen Doggen (jeroendoggen@gmail.com)

#ifndef WindowedSincFilter_h
#define WindowedSincFilter_h
#include <Arduino.h>
#include <Filter.h>

class WindowedSincFilter : public Filter
{
  public:
    WindowedSincFilter();
    void begin();

    int run(int data);

  private:
    int _y[3];
};
#endif
