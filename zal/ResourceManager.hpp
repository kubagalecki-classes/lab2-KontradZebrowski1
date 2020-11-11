#pragma once

#include "Resource.hpp"

class ResourceManager
{
  public:
    ResourceManager(Resource& klient) : Zasob{klient} {}

    double get()
    {
      double a = Zasob.get();
      return a;
    }

  private:
  Resource& Zasob;  // Twoja implementacja tutaj
};

