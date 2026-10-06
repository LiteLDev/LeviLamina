#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/client/settings/BaseBuilder.h"      // manual
#include "mc/client/settings/ComponentVariant.h" // manual

#ifdef LL_PLAT_C
#include "mc/client/settings/BannerCta.h"           // manual
#include "mc/client/settings/BannerType.h"          // manual
#include "mc/client/settings/ConfirmationRequest.h" // manual
#include "mc/client/settings/IDataProvider.h"       // manual
#include "mc/client/settings/INumberDataProvider.h" // manual
#include "mc/client/settings/IStringDataProvider.h" // manual
#endif

namespace Settings {

template <typename T0>
class Builder : public BaseBuilder<Builder<T0>, T0> {
public:
#ifdef LL_PLAT_C
    ::std::optional<::std::unique_ptr<ComponentVariant>> build();

    ~Builder();
#endif
};

#ifdef LL_PLAT_C

template <>
class Builder<::Settings::StringComponent>
: public ::Settings::BaseBuilder<Builder<::Settings::StringComponent>, ::Settings::StringComponent> {
public:
    // member variables
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Settings::IStringDataProvider>> mDataProvider;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                    mPlaceholder;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>                           mMaxLength;
    ::ll::TypedStorage<8, 72, ::std::optional<::std::function<::std::optional<::std::string>(::std::string)>>>
        mFormatValidation;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void(::std::string_view, ::std::string_view)>>>
        mChangeListeners;

    LLAPI Builder(::std::string_view id, ::std::string_view name);

    MCAPI ::std::optional<::std::unique_ptr<ComponentVariant>> build();

    MCAPI ~Builder();
};

template <>
class Builder<::Settings::NumberComponent<int>>
: public ::Settings::BaseBuilder<Builder<::Settings::NumberComponent<int>>, ::Settings::NumberComponent<int>> {
public:
    // member variables
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Settings::INumberDataProvider<int>>> mDataProvider;
    ::ll::TypedStorage<4, 4, int>                                                     mScaleFactor;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                    mStep;
    ::ll::TypedStorage<8, 64, ::std::function<::std::optional<::std::string>(int, int, int)>>
                                                                              mValueTextOverrideProvider;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void(int, int)>>> mChangeListeners;

    LLAPI Builder(::std::string_view id, ::std::string_view name);

    MCAPI ::std::optional<::std::unique_ptr<ComponentVariant>> build();

    MCAPI ~Builder();
};

template <>
class Builder<::Settings::NumberComponent<float>>
: public ::Settings::BaseBuilder<Builder<::Settings::NumberComponent<float>>, ::Settings::NumberComponent<float>> {
public:
    // member variables
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Settings::INumberDataProvider<float>>> mDataProvider;
    ::ll::TypedStorage<4, 4, float>                                                     mScaleFactor;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                                    mStep;
    ::ll::TypedStorage<8, 64, ::std::function<::std::optional<::std::string>(float, float, float)>>
                                                                                  mValueTextOverrideProvider;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void(float, float)>>> mChangeListeners;

    LLAPI Builder(::std::string_view id, ::std::string_view name);

    MCAPI ::std::optional<::std::unique_ptr<ComponentVariant>> build();

    MCAPI ~Builder();
};

template <>
class Builder<::Settings::BannerComponent>
: public ::Settings::BaseBuilder<Builder<::Settings::BannerComponent>, ::Settings::BannerComponent> {
public:
    // member variables
    ::ll::TypedStorage<4, 4, ::Settings::BannerType>                             mBannerType;
    ::ll::TypedStorage<8, 104, ::std::optional<::Settings::BannerCta>>           mCta;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Settings::IDataProvider>>       mDataProvider;
    ::ll::TypedStorage<8, 136, ::std::optional<::Settings::ConfirmationRequest>> mConfirmationRequest;

    LLAPI Builder(::std::string_view id, ::std::string_view name);

    MCAPI ::std::optional<::std::unique_ptr<ComponentVariant>> build();

    MCAPI ~Builder();
};

static_assert(sizeof(::Settings::Builder<::Settings::StringComponent>) == 0x218);
static_assert(offsetof(::Settings::Builder<::Settings::StringComponent>, mMaxLength) == 0x1A8);
static_assert(sizeof(::Settings::Builder<::Settings::NumberComponent<int>>) == 0x1E8);
static_assert(offsetof(::Settings::Builder<::Settings::NumberComponent<int>>, mStep) == 0x184);
static_assert(sizeof(::Settings::Builder<::Settings::NumberComponent<float>>) == 0x1E8);
static_assert(offsetof(::Settings::Builder<::Settings::NumberComponent<float>>, mStep) == 0x184);
static_assert(sizeof(::Settings::Builder<::Settings::BannerComponent>) == 0x278);
static_assert(offsetof(::Settings::Builder<::Settings::BannerComponent>, mConfirmationRequest) == 0x1F0);

template <typename T>
::std::optional<::std::unique_ptr<ComponentVariant>> buildComponent(
    ::std::string_view                    id,
    ::std::string_view                    name,
    ::std::optional<::std::string> const& description,
    ::std::function<void(Builder<T>&)>    tailInit
) {
    Builder<T> builder(id, name);
    builder.mDescription.get() = description;
    tailInit(builder);
    return builder.build();
}
#endif

} // namespace Settings
