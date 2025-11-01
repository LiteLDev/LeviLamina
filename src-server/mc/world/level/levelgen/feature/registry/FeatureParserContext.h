#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/MinEngineVersion.h"

// auto generated forward declare list
// clang-format off
class IWorldRegistriesProvider;
class ResourcePackManager;
// clang-format on

struct FeatureParserContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IWorldRegistriesProvider&> mLookupProvider;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager const&> mRpm;
    ::ll::TypedStorage<8, 32, ::MinEngineVersion> mMinEngineVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    FeatureParserContext& operator=(FeatureParserContext const&);
    FeatureParserContext(FeatureParserContext const&);
    FeatureParserContext();

};
