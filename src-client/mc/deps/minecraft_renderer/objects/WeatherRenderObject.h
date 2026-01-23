#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WeatherRenderObject {
public:
    // WeatherRenderObject inner types declare
    // clang-format off
    struct PreviousPosition;
    struct RuntimeValues;
    struct RenderRuntimeSettings;
    struct WeatherParameters;
    // clang-format on

    // WeatherRenderObject inner types define
    enum class PrecipitationType : int {
        Rain       = 0,
        Snow       = 1,
        Plankton   = 2,
        RedSpores  = 3,
        BlueSpores = 4,
        Ash        = 5,
        WhiteAsh   = 6,
        Count      = 7,
    };

    enum : int {
        Count = 10,
    };

    struct PreviousPosition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 16> mUnkb32dd5;
        ::ll::UntypedStorage<4, 16> mUnkdc531f;
        // NOLINTEND

    public:
        // prevent constructor by default
        PreviousPosition& operator=(PreviousPosition const&);
        PreviousPosition(PreviousPosition const&);
        PreviousPosition();
    };

    struct RuntimeValues {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk85ec24;
        ::ll::UntypedStorage<4, 4>  mUnkb8473b;
        ::ll::UntypedStorage<4, 12> mUnk77eab4;
        ::ll::UntypedStorage<4, 12> mUnkcdbe41;
        ::ll::UntypedStorage<4, 12> mUnk79bf2a;
        ::ll::UntypedStorage<4, 12> mUnkf513bf;
        ::ll::UntypedStorage<4, 12> mUnkca6b3a;
        ::ll::UntypedStorage<4, 4>  mUnk95e497;
        // NOLINTEND

    public:
        // prevent constructor by default
        RuntimeValues& operator=(RuntimeValues const&);
        RuntimeValues(RuntimeValues const&);
        RuntimeValues();
    };

    struct RenderRuntimeSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 72> mUnk272ea5;
        ::ll::UntypedStorage<4, 72> mUnkbf7b24;
        ::ll::UntypedStorage<1, 1>  mUnkef2699;
        // NOLINTEND

    public:
        // prevent constructor by default
        RenderRuntimeSettings& operator=(RenderRuntimeSettings const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI RenderRuntimeSettings();

        MCNAPI RenderRuntimeSettings(::WeatherRenderObject::RenderRuntimeSettings&&);

        MCNAPI RenderRuntimeSettings(::WeatherRenderObject::RenderRuntimeSettings const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();

        MCNAPI void* $ctor(::WeatherRenderObject::RenderRuntimeSettings&&);

        MCNAPI void* $ctor(::WeatherRenderObject::RenderRuntimeSettings const&);
        // NOLINTEND
    };

    struct WeatherParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk3b4790;
        ::ll::UntypedStorage<4, 4> mUnkb72192;
        ::ll::UntypedStorage<4, 4> mUnk77b9ec;
        ::ll::UntypedStorage<4, 4> mUnk47a3bd;
        ::ll::UntypedStorage<4, 4> mUnk32d28a;
        ::ll::UntypedStorage<1, 1> mUnkca4858;
        ::ll::UntypedStorage<4, 4> mUnka51ae6;
        ::ll::UntypedStorage<4, 4> mUnk323909;
        ::ll::UntypedStorage<4, 4> mUnk690589;
        // NOLINTEND

    public:
        // prevent constructor by default
        WeatherParameters& operator=(WeatherParameters const&);
        WeatherParameters(WeatherParameters const&);
        WeatherParameters();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>    mUnkdd7ad0;
    ::ll::UntypedStorage<8, 32>    mUnk5a050b;
    ::ll::UntypedStorage<8, 24>    mUnk55f5b6;
    ::ll::UntypedStorage<8, 24>    mUnkafd00f;
    ::ll::UntypedStorage<8, 24>    mUnka303ff;
    ::ll::UntypedStorage<4, 4>     mUnk825b45;
    ::ll::UntypedStorage<8, 8>     mUnk580f78;
    ::ll::UntypedStorage<8, 8>     mUnk30621c;
    ::ll::UntypedStorage<8, 8>     mUnkcfdcea;
    ::ll::UntypedStorage<8, 8>     mUnk551f65;
    ::ll::UntypedStorage<8, 8>     mUnk26879c;
    ::ll::UntypedStorage<8, 8>     mUnk8d196b;
    ::ll::UntypedStorage<8, 8>     mUnk7d7386;
    ::ll::UntypedStorage<4, 252>   mUnka998fe;
    ::ll::UntypedStorage<4, 10360> mUnkc33c5b;
    ::ll::UntypedStorage<4, 4>     mUnka7863b;
    ::ll::UntypedStorage<4, 4>     mUnkc660f1;
    ::ll::UntypedStorage<4, 4>     mUnkde76f6;
    ::ll::UntypedStorage<4, 4>     mUnk98ce12;
    ::ll::UntypedStorage<4, 4>     mUnk72e943;
    ::ll::UntypedStorage<4, 4>     mUnkcb4688;
    ::ll::UntypedStorage<4, 4>     mUnka341e7;
    ::ll::UntypedStorage<4, 4>     mUnk998f23;
    ::ll::UntypedStorage<4, 4>     mUnk2e0f1d;
    ::ll::UntypedStorage<4, 4>     mUnkf1723d;
    ::ll::UntypedStorage<4, 12>    mUnkd4ec94;
    // NOLINTEND

public:
    // prevent constructor by default
    WeatherRenderObject& operator=(WeatherRenderObject const&);
    WeatherRenderObject(WeatherRenderObject const&);
    WeatherRenderObject();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WeatherRenderObject(::WeatherRenderObject&&);

    MCNAPI ~WeatherRenderObject();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WeatherRenderObject&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
