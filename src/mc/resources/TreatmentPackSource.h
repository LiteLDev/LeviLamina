#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IPackManifestFactory;
class Pack;
class PackSourceReport;
// clang-format on

class TreatmentPackSource : public ::PackSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkca5dea;
    ::ll::UntypedStorage<8, 32> mUnk30f2e7;
    ::ll::UntypedStorage<1, 1>  mUnkea5ab3;
    ::ll::UntypedStorage<8, 24> mUnk3a09b0;
    // NOLINTEND

public:
    // prevent constructor by default
    TreatmentPackSource& operator=(TreatmentPackSource const&);
    TreatmentPackSource(TreatmentPackSource const&);
    TreatmentPackSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TreatmentPackSource() /*override*/ = default;

    // vIndex: 1
    virtual void forEachPackConst(::std::function<void(::Pack const&)>) const /*override*/;

    // vIndex: 2
    virtual void forEachPack(::std::function<void(::Pack&)>) /*override*/;

    // vIndex: 3
    virtual ::PackOrigin getPackOrigin() const /*override*/;

    // vIndex: 4
    virtual ::PackType getPackType() const /*override*/;

    // vIndex: 5
    virtual ::PackSourceReport
    load(::IPackManifestFactory&, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
