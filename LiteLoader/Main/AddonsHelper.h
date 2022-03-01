#pragma once
#include <string>
#include <vector>
#include <LLAPI.h>

void InitAddonsHelper();

struct Addon
{
    enum class Type { ResourcePack, BehaviorPack  };
    std::string name;
    std::string description;
    Type type;
    LL::Version version;
    std::string uuid;
    std::string directory;
};

class AddonsManager
{
public:
    static bool install(std::string path);
    static bool uninstall(std::string nameOrUuid);

    static std::vector<Addon*> getAllAddons();
    static Addon* getAddon(std::string nameOrUuid);
};