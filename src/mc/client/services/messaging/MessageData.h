#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ButtonData;
struct ImageData;
namespace Json { class Value; }
// clang-format on

struct MessageData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkbf7026;
    ::ll::UntypedStorage<8, 32>  mUnkeced69;
    ::ll::UntypedStorage<8, 32>  mUnk60c8cc;
    ::ll::UntypedStorage<8, 32>  mUnkad78af;
    ::ll::UntypedStorage<8, 32>  mUnkfaf584;
    ::ll::UntypedStorage<8, 32>  mUnkfee155;
    ::ll::UntypedStorage<8, 32>  mUnk7c30ea;
    ::ll::UntypedStorage<1, 1>   mUnk1444fc;
    ::ll::UntypedStorage<8, 32>  mUnka7fd65;
    ::ll::UntypedStorage<8, 40>  mUnkb4266a;
    ::ll::UntypedStorage<8, 32>  mUnk45cc17;
    ::ll::UntypedStorage<8, 24>  mUnkb82727;
    ::ll::UntypedStorage<8, 24>  mUnkab5983;
    ::ll::UntypedStorage<8, 24>  mUnkbeb9ad;
    ::ll::UntypedStorage<8, 128> mUnke9d771;
    ::ll::UntypedStorage<8, 88>  mUnk1ce676;
    ::ll::UntypedStorage<1, 1>   mUnk2135ab;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C MessageData();

    MCNAPI_C MessageData(::MessageData&&);

    MCNAPI_C MessageData(::MessageData const&);

    MCNAPI_C explicit MessageData(::Json::Value const& json);

    MCNAPI_C void _getButtonArtFromJson(::Json::Value const& json);

    MCNAPI_C void _getButtonDataFromJson(::Json::Value const& json);

    MCNAPI_C void _getGamedropFromJson(::Json::Value const& json);

    MCNAPI_C void _getImagesFromJson(::Json::Value const& json);

    MCNAPI_C void _getItemDataFromJson(::Json::Value const& json);

    MCNAPI_C void _getStyleFromJson(::Json::Value const& json);

    MCNAPI_C ::ButtonData getButtonById(::std::string const& id) const;

    MCNAPI_C ::ImageData getImageById(::std::string const& id) const;

    MCNAPI_C ::MessageData& operator=(::MessageData&&);

    MCNAPI_C ::MessageData& operator=(::MessageData const&);

    MCNAPI_C ~MessageData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::MessageData&&);

    MCNAPI_C void* $ctor(::MessageData const&);

    MCNAPI_C void* $ctor(::Json::Value const& json);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
