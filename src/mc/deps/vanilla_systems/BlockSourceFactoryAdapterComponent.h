#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace VanillaSystems { class IBlockSourceFactoryAdapter; }
namespace VanillaSystems { class IOwnedConstBlockSource; }
// clang-format on

namespace VanillaSystems {

struct BlockSourceFactoryAdapterComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::VanillaSystems::IBlockSourceFactoryAdapter*>> mFactoryAdapter;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VanillaSystems::IOwnedConstBlockSource>>    mTemporarySource;
    // NOLINTEND
};

} // namespace VanillaSystems
