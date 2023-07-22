#pragma once
#include <string>
#include <vector>
#include "liteloader/api/LLAPI.h"

void InitAddonsHelper();

struct Addon {
    enum class Type {
        ResourcePack,
        BehaviorPack
    };
    std::string name;
    std::string description;
    Type type;
    ll::Version version;
    std::string uuid;
    std::string directory;
    bool enable = false;

    std::string getPrintName() const;
};

class AddonsManager {
public:
    static bool install(std::string path);
    static bool uninstall(std::string nameOrUuid);

    static bool enable(std::string nameOrUuid);
    static bool disable(std::string nameOrUuid);

    static std::vector<Addon*> getAllAddons();
    static Addon* findAddon(const std::string& nameOrUuid, bool fuzzy = false);
};