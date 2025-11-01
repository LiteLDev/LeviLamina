#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTagEditHelper;
// clang-format on

class CompoundTagUpdaterNodeBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8cf5d3;
    // NOLINTEND

public:
    // prevent constructor by default
    CompoundTagUpdaterNodeBuilder& operator=(CompoundTagUpdaterNodeBuilder const&);
    CompoundTagUpdaterNodeBuilder(CompoundTagUpdaterNodeBuilder const&);
    CompoundTagUpdaterNodeBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CompoundTagUpdaterNodeBuilder& edit(::std::string const& tagName, ::std::function<void(::CompoundTagEditHelper&)>&& update);

    MCNAPI void fork(uint64 size, ::std::function<void(::CompoundTagUpdaterNodeBuilder&, uint64)>&& function);

    MCNAPI ::CompoundTagUpdaterNodeBuilder& match(::std::string const& tagName, ::std::string pattern);

    MCNAPI ::CompoundTagUpdaterNodeBuilder& matchInteger(::std::string const& tagName, int64 value);

    MCNAPI ::CompoundTagUpdaterNodeBuilder& matchLiteral(::std::string const& tagName, ::std::string pattern);

    MCNAPI ::CompoundTagUpdaterNodeBuilder& popVisit();

    MCNAPI ::CompoundTagUpdaterNodeBuilder& remove(::std::string const& tagName);

    MCNAPI ::CompoundTagUpdaterNodeBuilder& rename(::std::string const& tagName, ::std::string const& newTagName);

    MCNAPI ::CompoundTagUpdaterNodeBuilder& tryEdit(::std::string const& tagName, ::std::function<void(::CompoundTagEditHelper&)>&& update);

    MCNAPI ::CompoundTagUpdaterNodeBuilder& visit(::std::string const& tagName);
    // NOLINTEND

};
