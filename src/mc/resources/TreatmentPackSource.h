#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
struct PackSourceLoadOptions;
struct PackSourceLoadResult;
// clang-format on

class TreatmentPackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkca5dea;
    ::ll::UntypedStorage<8, 32> mUnk46116b;
    ::ll::UntypedStorage<1, 1>  mUnk413230;
    // NOLINTEND

public:
    // prevent constructor by default
    TreatmentPackSource& operator=(TreatmentPackSource const&);
    TreatmentPackSource(TreatmentPackSource const&);
    TreatmentPackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TreatmentPackSource() /*override*/ = default;

    virtual ::PackOrigin getPackOrigin() const /*override*/;

    virtual ::PackType getPackType() const /*override*/;

    virtual ::PackSourceLoadResult _loadImpl(::PackSourceLoadOptions&&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
