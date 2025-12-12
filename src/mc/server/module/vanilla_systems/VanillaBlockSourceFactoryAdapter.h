#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_systems/IBlockSourceFactoryAdapter.h"

// auto generated forward declare list
// clang-format off
namespace VanillaSystems { class IOwnedConstBlockSource; }
// clang-format on

namespace VanillaSystems {

class VanillaBlockSourceFactoryAdapter : public ::VanillaSystems::IBlockSourceFactoryAdapter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkdaffcc;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaBlockSourceFactoryAdapter& operator=(VanillaBlockSourceFactoryAdapter const&);
    VanillaBlockSourceFactoryAdapter(VanillaBlockSourceFactoryAdapter const&);
    VanillaBlockSourceFactoryAdapter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::VanillaSystems::IOwnedConstBlockSource> createBlockSource() /*override*/;

    virtual ~VanillaBlockSourceFactoryAdapter() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::VanillaSystems::IOwnedConstBlockSource> $createBlockSource();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace VanillaSystems
