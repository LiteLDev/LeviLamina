#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class HashedString;
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
    struct TreeChild {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mUnk56eb22;
        ::ll::UntypedStorage<8, 8>  mUnkd67789;
        // NOLINTEND

    public:
        // prevent constructor by default
        TreeChild& operator=(TreeChild const&);
        TreeChild(TreeChild const&);
        TreeChild();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI TreeChild(::HashedString key, ::std::unique_ptr<::Core::StorageAreasTree::TreeNode> node);

        MCNAPI ~TreeChild();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::HashedString key, ::std::unique_ptr<::Core::StorageAreasTree::TreeNode> node);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct TreeNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk96dd77;
        ::ll::UntypedStorage<8, 8>  mUnk37f7a2;
        // NOLINTEND

    public:
        // prevent constructor by default
        TreeNode& operator=(TreeNode const&);
        TreeNode(TreeNode const&);
        TreeNode();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~TreeNode();
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
    ::ll::UntypedStorage<8, 24> mUnk616396;
    ::ll::UntypedStorage<8, 80> mUnk72fcd7;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageAreasTree& operator=(StorageAreasTree const&);
    StorageAreasTree(StorageAreasTree const&);
    StorageAreasTree();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void forEachStorageArea(::std::function<void(::Core::FileStorageArea&)>&& visitorFunction);

    MCNAPI ::Bedrock::Result<::std::shared_ptr<::Core::FileStorageArea>> getStorageArea(::Core::PathView path) const;

    MCNAPI void insertStorageArea(::Core::FileStorageArea& storageArea);

    MCNAPI void removeStorageArea(::Core::FileStorageArea& storageArea);

    MCNAPI void teardown(::std::function<void(::Core::FileStorageArea&)>&& teardownCallback);
    // NOLINTEND
};

} // namespace Core
