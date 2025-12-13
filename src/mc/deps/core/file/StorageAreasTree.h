#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStorageArea; }
namespace Core { class PathView; }
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
        MCNAPI ::Core::StorageAreasTree::TreeChild& operator=(::Core::StorageAreasTree::TreeChild&&);

        MCNAPI ~TreeChild();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
    MCNAPI ::Core::FileStorageArea* getStorageArea(::Core::PathView path) const;

    MCNAPI void insertStorageArea(::Core::FileStorageArea& storageArea);

    MCNAPI void removeStorageArea(::Core::FileStorageArea& storageArea);

    MCNAPI void teardown(::std::function<void(::Core::FileStorageArea&)>&& teardownCallback);
    // NOLINTEND
};

} // namespace Core
