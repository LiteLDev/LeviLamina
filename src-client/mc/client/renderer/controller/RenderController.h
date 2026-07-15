#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DataDrivenGeometry;
class DataDrivenModel;
class RenderParams;
class Vec4;
namespace mce { class Color; }
// clang-format on

class RenderController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnk972647;
    ::ll::UntypedStorage<8, 192> mUnkbd217d;
    ::ll::UntypedStorage<8, 16>  mUnk82218a;
    ::ll::UntypedStorage<8, 64>  mUnkd6f969;
    ::ll::UntypedStorage<8, 64>  mUnkd9ddbc;
    ::ll::UntypedStorage<8, 64>  mUnk117366;
    ::ll::UntypedStorage<8, 64>  mUnk6e4053;
    ::ll::UntypedStorage<8, 64>  mUnk44f009;
    ::ll::UntypedStorage<8, 24>  mUnk43d5b6;
    ::ll::UntypedStorage<8, 24>  mUnk8437ab;
    ::ll::UntypedStorage<8, 24>  mUnkf0a6dd;
    ::ll::UntypedStorage<8, 24>  mUnk85c383;
    ::ll::UntypedStorage<1, 1>   mUnkfa4011;
    ::ll::UntypedStorage<1, 1>   mUnkad774d;
    ::ll::UntypedStorage<1, 1>   mUnk7aa91c;
    ::ll::UntypedStorage<1, 1>   mUnk15c5da;
    ::ll::UntypedStorage<8, 16>  mUnk39f6f1;
    ::ll::UntypedStorage<8, 8>   mUnk861111;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderController& operator=(RenderController const&);
    RenderController();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderController(::RenderController const&);

    MCNAPI ::std::vector<::std::shared_ptr<::DataDrivenGeometry const>> getDataDrivenGeometries() const;

    MCNAPI ::std::shared_ptr<::DataDrivenGeometry> getGeometry(::RenderParams& renderParams) const;

    MCNAPI ::mce::Color getOverlayColor(::RenderParams& renderParams) const;

    MCNAPI ::mce::Color getTintColor(::RenderParams& renderParams) const;

    MCNAPI ::Vec4 getUVAnim(::RenderParams& renderParams, ::Vec4 const& defaultUVAnim) const;

    MCNAPI bool init(::DataDrivenModel& model);

    MCNAPI void render(::RenderParams& renderParams, ::DataDrivenGeometry& geo);

    MCNAPI bool replaceVariables(::DataDrivenModel& model);

    MCNAPI bool updatePartMaterials();

    MCNAPI bool updatePartVisibility();

    MCNAPI ~RenderController();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string nameToRegExStr(::std::string const& sourceName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RenderController const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
