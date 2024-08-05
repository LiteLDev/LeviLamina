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
    edit(std::string const&, std::function<void(class CompoundTagEditHelper&)>&&);

    MCAPI void fork(uint64, std::function<void(class CompoundTagUpdaterNodeBuilder&, uint64)>&&);

    MCAPI class CompoundTagUpdaterNodeBuilder& match(std::string const&, std::string);

    MCAPI class CompoundTagUpdaterNodeBuilder& matchInteger(std::string const&, int64);

    MCAPI class CompoundTagUpdaterNodeBuilder& matchLiteral(std::string const&, std::string);

    MCAPI class CompoundTagUpdaterNodeBuilder& popVisit();

    MCAPI class CompoundTagUpdaterNodeBuilder& remove(std::string const&);

    MCAPI class CompoundTagUpdaterNodeBuilder& rename(std::string const&, std::string const&);

    MCAPI class CompoundTagUpdaterNodeBuilder&
    tryEdit(std::string const&, std::function<void(class CompoundTagEditHelper&)>&&);

    MCAPI class CompoundTagUpdaterNodeBuilder& visit(std::string const&);

    // NOLINTEND
};
