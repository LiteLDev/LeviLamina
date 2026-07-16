#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPaperDollUIDefSource {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPaperDollUIDefSource() = default;

    virtual bool getAsBool(::std::string_view key, bool defaultValue) const = 0;

    virtual float getAsFloat(::std::string_view key, float defaultValue) const = 0;

    virtual ::std::string getAsString(::std::string_view key, ::std::string_view defaultValue) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
