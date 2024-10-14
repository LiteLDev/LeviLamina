#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BoolOption : public ::Option {
public:
    // prevent constructor by default
    BoolOption& operator=(BoolOption const&);
    BoolOption(BoolOption const&);
    BoolOption();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BoolOption() = default;

    // vIndex: 1
    virtual void save(std::vector<std::pair<std::string, std::string>>& propertyVector);

    // vIndex: 2
    virtual void load(std::string const& valueString);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _set(bool v, bool saveOptionChange);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void load$(std::string const& valueString);

    MCAPI void save$(std::vector<std::pair<std::string, std::string>>& propertyVector);

    // NOLINTEND
};
