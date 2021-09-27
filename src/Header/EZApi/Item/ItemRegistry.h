#pragma once

#include "../Core/SharedPtr.h"
#include "../Core/WeakPtr.h"
#include "../dll.h"

class ItemRegistry {
public:
    MCAPI static int getItemCount(void);

    MCAPI static class WeakPtr<class Item> getItem(short);
    MCAPI static class WeakPtr<class Item> getItem(class Block const&);
    MCAPI static class WeakPtr<class Item> getItem(class BlockLegacy const&);

    MCAPI static class WeakPtr<class Item> lookupByName(int, std::string const&);
    MCAPI static class WeakPtr<class Item> lookupByName(int&, int&, std::string const&);
    MCAPI static class WeakPtr<class Item> lookupByName(class HashedString const&);
    MCAPI static class WeakPtr<class Item> lookupByNameNoAlias(std::string const&);
    MCAPI static class WeakPtr<class Item> lookupByNameNoAlias(class HashedString const&);

    static std::vector<SharedPtr<Item>> const& getItems() {
        return mItemRegistry;
    }

private:
    MCAPI static std::vector<SharedPtr<class Item>> mItemRegistry;
};