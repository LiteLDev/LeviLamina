#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IBooleanDataProvider.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class IOptions;
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

namespace Settings {

class TextureStreamingDataProvider : public ::Settings::IBooleanDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::OptionID>                                    mOptionId;
    ::ll::TypedStorage<8, 8, ::IOptions&>                                   mOptions;
    ::ll::TypedStorage<8, 8, ::Settings::RegistryBuilder::IBuilderContext&> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureStreamingDataProvider& operator=(TextureStreamingDataProvider const&);
    TextureStreamingDataProvider(TextureStreamingDataProvider const&);
    TextureStreamingDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool getValue() const /*override*/;

    virtual void setValue(bool value) /*override*/;

    virtual bool canModify() const /*override*/;

    virtual ~TextureStreamingDataProvider() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $getValue() const;

    MCAPI void $setValue(bool value);

    MCAPI bool $canModify() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings
