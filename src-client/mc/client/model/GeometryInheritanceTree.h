#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/ModelParent.h"

// auto generated forward declare list
// clang-format off
class GeometryGroup;
namespace Json { class Value; }
// clang-format on

class GeometryInheritanceTree {
public:
    // GeometryInheritanceTree inner types declare
    // clang-format off
    struct GeometryInheritanceTreeNode;
    // clang-format on

    // GeometryInheritanceTree inner types define
    struct GeometryInheritanceTreeNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                                                          mName;
        ::ll::TypedStorage<8, 32, ::std::string>                                                          mFileName;
        ::ll::TypedStorage<8, 112, ::ModelParent>                                                         mModelParent;
        ::ll::TypedStorage<8, 24, ::std::vector<::GeometryInheritanceTree::GeometryInheritanceTreeNode*>> mChildren;
        ::ll::TypedStorage<1, 1, bool>                                                                    mIsVisited;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::Json::Value>>> mLoadedJsonFiles;
    ::ll::
        TypedStorage<8, 64, ::std::unordered_map<::std::string, ::GeometryInheritanceTree::GeometryInheritanceTreeNode>>
                                            mNodes;
    ::ll::TypedStorage<8, 80, ::std::mutex> mNodeLock;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::GeometryInheritanceTree::GeometryInheritanceTreeNode&
    _node(::std::string const& name, ::std::string const& fileName);

    MCNAPI void addInheritance(
        ::std::string const& child,
        ::std::string const& sourceFilePathWithExtension,
        ::ModelParent const& modelParent,
        ::std::string const& parentName
    );

    MCNAPI void visitBFS(
        ::std::weak_ptr<::GeometryGroup> weakGeometryGroup,
        ::std::function<void(::std::weak_ptr<::GeometryGroup>, ::std::string const&, ::ModelParent const&)> callback
    ) const;
    // NOLINTEND
};
