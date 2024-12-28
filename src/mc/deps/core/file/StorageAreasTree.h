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
    struct TreeNode;
    // clang-format on

    // StorageAreasTree inner types define
    struct TreeNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk4a01cf;
        ::ll::UntypedStorage<8, 8>  mUnk37f7a2;
        // NOLINTEND

    public:
        // prevent constructor by default
        TreeNode& operator=(TreeNode const&);
        TreeNode(TreeNode const&);
        TreeNode();
    };

    struct TreeChild {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mUnk56eb22;
        ::ll::UntypedStorage<8, 8>  mUnk6e8504;
        // NOLINTEND

    public:
        // prevent constructor by default
        TreeChild& operator=(TreeChild const&);
        TreeChild(TreeChild const&);
        TreeChild();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~TreeChild();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4e6c3d;
    ::ll::UntypedStorage<8, 24> mUnk7f35b0;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageAreasTree& operator=(StorageAreasTree const&);
    StorageAreasTree(StorageAreasTree const&);
    StorageAreasTree();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Core::FileStorageArea* getStorageArea(::Core::Path const& path) const;

    MCAPI void insertStorageArea(::Core::FileStorageArea& storageArea);

    MCAPI void removeStorageArea(::Core::FileStorageArea& storageArea);

    MCAPI void teardown(::std::function<void(::Core::FileStorageArea&)>&& teardownCallback);
    // NOLINTEND
};

} // namespace Core
