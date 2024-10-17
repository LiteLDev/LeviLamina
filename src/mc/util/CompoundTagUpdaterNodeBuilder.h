#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompoundTagUpdaterNodeBuilder {
public:
    // prevent constructor by default
    CompoundTagUpdaterNodeBuilder& operator=(CompoundTagUpdaterNodeBuilder const&);
    CompoundTagUpdaterNodeBuilder(CompoundTagUpdaterNodeBuilder const&);
    CompoundTagUpdaterNodeBuilder();

public:
    // NOLINTBEGIN
    MCAPI class CompoundTagUpdaterNodeBuilder&
    edit(std::string const& tagName, std::function<void(class CompoundTagEditHelper&)>&& update);

    MCAPI void fork(uint64 size, std::function<void(class CompoundTagUpdaterNodeBuilder&, uint64)>&& function);

    MCAPI class CompoundTagUpdaterNodeBuilder& match(std::string const& tagName, std::string pattern);

    MCAPI class CompoundTagUpdaterNodeBuilder& matchInteger(std::string const& tagName, int64 value);

    MCAPI class CompoundTagUpdaterNodeBuilder& matchLiteral(std::string const& tagName, std::string pattern);

    MCAPI class CompoundTagUpdaterNodeBuilder& popVisit();

    MCAPI class CompoundTagUpdaterNodeBuilder& remove(std::string const& tagName);

    MCAPI class CompoundTagUpdaterNodeBuilder& rename(std::string const& tagName, std::string const& newTagName);

    MCAPI class CompoundTagUpdaterNodeBuilder&
    tryEdit(std::string const& tagName, std::function<void(class CompoundTagEditHelper&)>&& update);

    MCAPI class CompoundTagUpdaterNodeBuilder& visit(std::string const& tagName);

    // NOLINTEND
};
