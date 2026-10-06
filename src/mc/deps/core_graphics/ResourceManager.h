#pragma once
#include "mc/_HeaderOutputPredefine.h"

namespace cg {

template <
    typename ResourceType_t,
    typename ResourceLocation_t,
    template <typename...> class Container = std::unordered_map>
class ResourceManager {
public:
    using ResourceType     = ResourceType_t;
    using ResourceLocation = ResourceLocation_t;
    using ResourceHandle   = ResourceType;

protected:
    Container<ResourceLocation, ResourceType> mContainer;

public:
    ResourceType& operator[](ResourceLocation const& loc) { return mContainer[loc]; }

    ResourceType& addResource(ResourceLocation const& loc, ResourceType res) {
        auto [it, inserted] = mContainer.try_emplace(loc, std::move(res));
        if (!inserted) it->second = std::move(res);
        return it->second;
    }

    void clear() { mContainer.clear(); }

    ResourceHandle getResource(ResourceLocation const& loc) const {
        auto it = mContainer.find(loc);
        if (it == mContainer.end()) return nullptr;
        return it->second;
    }

    bool removeResource(ResourceLocation const& loc) { return mContainer.erase(loc) > 0; }

    bool extract(ResourceLocation const& loc, ResourceType& out) {
        auto it = mContainer.find(loc);
        if (it == mContainer.end()) return false;
        out = std::move(it->second);
        mContainer.erase(it);
        return true;
    }
};

} // namespace cg