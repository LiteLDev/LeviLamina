#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
// clang-format on

namespace Core {

class StorageAreasTree {
public:
    // StorageAreasTree inner types declare
    // clang-format off
    struct TreeChild;
    // clang-format on

    // StorageAreasTree inner types define
    struct TreeChild {
    public:
        // prevent constructor by default
        TreeChild& operator=(TreeChild const&);
        TreeChild(TreeChild const&);
        TreeChild();

    public:
        // NOLINTBEGIN
        MCAPI struct Core::StorageAreasTree::TreeChild& operator=(struct Core::StorageAreasTree::TreeChild&&);

        MCAPI ~TreeChild();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    StorageAreasTree& operator=(StorageAreasTree const&);
    StorageAreasTree(StorageAreasTree const&);
    StorageAreasTree();

public:
    // NOLINTBEGIN
    MCAPI class Core::FileStorageArea* getStorageArea(class Core::Path const& path) const;

    MCAPI void insertStorageArea(class Core::FileStorageArea& storageArea);

    MCAPI void removeStorageArea(class Core::FileStorageArea& storageArea);

    MCAPI void teardown(std::function<void(class Core::FileStorageArea&)>&& teardownCallback);

    // NOLINTEND
};

}; // namespace Core
