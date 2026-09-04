#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/IPaperDollUIDefSource.h"

// auto generated forward declare list
// clang-format off
class PropertyBag;
// clang-format on

class PaperDollPropertyBagSource : public ::IPaperDollUIDefSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PropertyBag const&> mBag;
    // NOLINTEND

public:
    // prevent constructor by default
    PaperDollPropertyBagSource& operator=(PaperDollPropertyBagSource const&);
    PaperDollPropertyBagSource(PaperDollPropertyBagSource const&);
    PaperDollPropertyBagSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool getAsBool(::std::string_view key, bool defaultValue) const /*override*/;

    virtual float getAsFloat(::std::string_view key, float defaultValue) const /*override*/;

    virtual ::std::string getAsString(::std::string_view key, ::std::string_view defaultValue) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $getAsBool(::std::string_view key, bool defaultValue) const;

    MCAPI float $getAsFloat(::std::string_view key, float defaultValue) const;

    MCAPI ::std::string $getAsString(::std::string_view key, ::std::string_view defaultValue) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
