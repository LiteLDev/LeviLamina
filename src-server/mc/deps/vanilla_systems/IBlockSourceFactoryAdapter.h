#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace VanillaSystems { class IOwnedConstBlockSource; }
// clang-format on

namespace VanillaSystems {

class IBlockSourceFactoryAdapter {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IBlockSourceFactoryAdapter() = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::VanillaSystems::IOwnedConstBlockSource> createBlockSource() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace VanillaSystems
