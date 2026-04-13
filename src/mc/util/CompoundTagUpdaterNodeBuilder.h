#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CompoundTagUpdater.h"

// auto generated forward declare list
// clang-format off
class CompoundTagEditHelper;
// clang-format on

class CompoundTagUpdaterNodeBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CompoundTagUpdater::Node&> mUpdaterNode;
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
    // NOLINTEND
};
