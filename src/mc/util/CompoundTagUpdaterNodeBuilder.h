#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"
#include "mc/util/CompoundTagUpdater.h"

// auto generated forward declare list
// clang-format off
class CompoundTagEditHelper;
class CompoundTagUpdater;
// clang-format on

class CompoundTagUpdaterNodeBuilder {
public:
    // CompoundTagUpdaterNodeBuilder inner types declare
    // clang-format off
    struct NodeData;
    // clang-format on

    // CompoundTagUpdaterNodeBuilder inner types define
    struct NodeData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                    mIsNameLiteral;
        ::ll::TypedStorage<1, 1, bool>                                    mChangesName;
        ::ll::TypedStorage<8, 8, ::std::string const&>                    mName;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTagUpdater>> mUpdater;
        // NOLINTEND

    public:
        // prevent constructor by default
        NodeData& operator=(NodeData const&);
        NodeData(NodeData const&);
        NodeData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~NodeData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    using InsertNode = ::brstd::move_only_function<void(::CompoundTagUpdaterNodeBuilder::NodeData)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    mIsNameLiteral;
    ::ll::TypedStorage<1, 1, bool>                                    mEditsName;
    ::ll::TypedStorage<8, 32, ::std::string>                          mName;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTagUpdater>> mUpdater;
    ::ll::TypedStorage<8, 8, ::CompoundTagUpdater::Node&>             mUpdaterNode;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void(::CompoundTagUpdaterNodeBuilder::NodeData)>> mInsert;
    // NOLINTEND

public:
    // prevent constructor by default
    CompoundTagUpdaterNodeBuilder& operator=(CompoundTagUpdaterNodeBuilder const&);
    CompoundTagUpdaterNodeBuilder(CompoundTagUpdaterNodeBuilder const&);
    CompoundTagUpdaterNodeBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CompoundTagUpdaterNodeBuilder _addChildNode();

    MCAPI ::CompoundTagUpdaterNodeBuilder&
    edit(::std::string const& tagName, ::std::function<void(::CompoundTagEditHelper&)>&& update);

    MCAPI ::CompoundTagUpdaterNodeBuilder& match(::std::string const& tagName, ::std::string pattern);

    MCAPI ::CompoundTagUpdaterNodeBuilder& matchInteger(::std::string const& tagName, int64 value);

    MCAPI ::CompoundTagUpdaterNodeBuilder& matchLiteral(::std::string const& tagName, ::std::string pattern);

    MCAPI ::CompoundTagUpdaterNodeBuilder& popVisit();

    MCAPI ::CompoundTagUpdaterNodeBuilder& remove(::std::string const& tagName);

    MCAPI ::CompoundTagUpdaterNodeBuilder& rename(::std::string const& tagName, ::std::string const& newTagName);

    MCAPI ::CompoundTagUpdaterNodeBuilder&
    tryEdit(::std::string const& tagName, ::std::function<void(::CompoundTagEditHelper&)>&& update);

    MCAPI ::CompoundTagUpdaterNodeBuilder& visit(::std::string const& tagName);

    MCAPI ~CompoundTagUpdaterNodeBuilder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
