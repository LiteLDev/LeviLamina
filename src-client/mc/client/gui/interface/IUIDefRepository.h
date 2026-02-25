#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/threading/SharedLock.h"

// auto generated forward declare list
// clang-format off
class ItemRegistryRef;
class PackReport;
class ResourceLocation;
class ResourcePackStack;
namespace Json { class Value; }
// clang-format on

class IUIDefRepository : public ::Bedrock::EnableNonOwnerReferences {
public:
    // IUIDefRepository inner types define
    using PackReportsCallback = ::std::function<void(::std::vector<::PackReport>&)>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void loadDefsList(
        ::ResourceLocation const&,
        ::ResourcePackStack const&,
        ::std::function<void(::std::vector<::PackReport>&)>
    ) = 0;

    virtual void validateDefEntries(
        ::ResourceLocation const&,
        ::std::shared_ptr<::ResourcePackStack const>,
        ::std::function<void(::std::vector<::PackReport>&)>
    ) const = 0;

    virtual ::Json::Value const& findDef(::std::string const&, ::std::string const&) const = 0;

    virtual ::Bedrock::Threading::SharedLock<::std::shared_mutex> acquireSharedLock() const = 0;

    virtual void syncUILoad() = 0;

    virtual void syncUILoadDefinitions() = 0;

    virtual void syncUILoadDefinitionReferences() = 0;

    virtual void cancelUIValidation() = 0;

    virtual bool isLoadingDone() const = 0;

    virtual bool isUILoadingDone() const = 0;

    virtual bool isUIValidationDone() const = 0;

    virtual void forEachControl(::std::function<void(::Json::Value const&, ::std::string const&)>) = 0;

    virtual ::Json::Value const& getGlobalVariables() const = 0;

    virtual void translateLegacyItemIdsInRepository(::ItemRegistryRef const) = 0;

    virtual ~IUIDefRepository() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
