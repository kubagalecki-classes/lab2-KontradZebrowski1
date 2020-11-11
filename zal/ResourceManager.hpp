#pragma once

#include "Resource.hpp"

class ResourceManager
{
  public:
    //ResourceManager(Resource& klient) : Zasob{klient} {}
    ResourceManager() {Zasob = new Resource;}
    double get()
    {        
      return Zasob.get();
    }

  private:
  Resource* Zasob;  // Twoja implementacja tutaj
};
