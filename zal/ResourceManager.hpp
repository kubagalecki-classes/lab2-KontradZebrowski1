#pragma once

#include "Resource.hpp"

class ResourceManager
{
    Resource *Q = nullptr;

public:
    ResourceManager() { Q=new Resource;}
    ~ResourceManager() { delete Q; }
    double get() { return Q->get(); }
    ResourceManager(const ResourceManager& aa)
     {
 Q=new Resource{*aa.Q};
     }
    ResourceManager& operator=(const ResourceManager& aa)
    { if(this!=&aa)
        {delete Q;
        Q=new Resource {*aa.Q};
        }
        return *this;
        
    }
    
};