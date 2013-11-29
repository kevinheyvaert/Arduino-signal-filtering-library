// Arduino Signal Filtering Library
// Copyright 2012-2013 Jeroen Doggen (jeroendoggen@gmail.com)

#include <Arduino.h>
#include <WindowedSincFilter.h>

/// Constructor
WindowedSincFilter::WindowedSincFilter()
{
}

/// Begin function: set default filter options
void WindowedSincFilter::begin()
{
}

/// Just a placeholder
int WindowedSincFilter::run(int data)
{
  return (data*2);                                // Filter just return the double of the input sample
}
