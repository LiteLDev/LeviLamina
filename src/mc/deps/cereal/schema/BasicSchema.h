#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/cereal/schema/SerializationTraits.h"
#include "mc/deps/cereal/schema/VariantPriorityLevel.h"
#include "mc/external/cereal/StringViewHash.h"
#include "mc/platform/brstd/flat_set.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal { struct DescriptionConfig; }
namespace cereal { struct MetaVisitor; }
namespace cereal { struct SchemaDescription; }
namespace cereal { struct SchemaReader; }
namespace cereal { struct SchemaWriter; }
namespace cereal::internal { struct LoadState; }
namespace cereal::internal { struct OverrideState; }
namespace cereal::internal { struct ReflectionContext; }
namespace cereal::internal { struct SaveState; }
// clang-format on

namespace cereal::internal {

class BasicSchema {
public:
    // BasicSchema inner types declare
    // clang-format off
    struct DynamicSetterArg;
    struct EnumMapping;
    struct GetterDescriptor;
    struct MemberDescriptor;
    struct MemberFamily;
    struct SetterDescriptor;
    struct TaggedVariantDescriptor;
    struct TypeDescriptor;
    // clang-format on

    // BasicSchema inner types define
    struct DynamicSetterArg {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::entt::meta_any>                                   mArg;
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::cereal::SerializerContext const*>> mContext;
        // NOLINTEND
    };

    struct EnumMapping {
    public:
        // EnumMapping inner types declare
        // clang-format off
        struct EnumValue;
        struct View;
        // clang-format on

        // EnumMapping inner types define
        struct EnumValue {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<1, 1, bool> mIsDeprecated;
            // NOLINTEND
        };

        struct View {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<4, 4, uint> mScope;
            ::ll::
                TypedStorage<8, 64, ::std::unordered_map<uint, ::cereal::internal::BasicSchema::EnumMapping::EnumValue>>
                                                            mValues;
            ::ll::TypedStorage<4, 8, ::std::optional<uint>> mParent;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::cereal::internal::BasicSchema::EnumMapping::View>> mViews;
        // NOLINTEND
    };

    struct GetterDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cereal::internal::BasicSchema>> mPtr;
        ::ll::TypedStorage<1, 1, ::cereal::ContextArea>                              mAllowedAreas;
        // NOLINTEND
    };

    struct MemberDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cereal::internal::BasicSchema>> mPtr;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cereal::Constraint>>            mConstraint;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mNameExt;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mName;
        ::ll::TypedStorage<8, 8, ::entt::meta_type (*)(::entt::meta_ctx const&)>     mDynamicSetterArgCtor;
        ::ll::TypedStorage<
            8,
            72,
            ::entt::dense_map<
                ::std::string,
                ::std::pair<::entt::meta_type (*)(::entt::meta_ctx const&), ::entt::basic_any<16, 8>>,
                ::cereal::util::internal::StringViewHash,
                ::std::equal_to<void>>>
            mUserPropertiesMap;
        ::ll::TypedStorage<
            8,
            24,
            ::brstd::flat_set<
                ::cereal::internal::OverrideState,
                ::std::less<void>,
                ::std::vector<::cereal::internal::OverrideState>>>
                                                                mOverridingTypes;
        ::ll::TypedStorage<8, 32, ::std::string>                mErrorMessage;
        ::ll::TypedStorage<1, 1, ::cereal::SerializationTraits> mSerializationTraits;
        ::ll::TypedStorage<1, 1, ::cereal::ContextArea>         mAllowedAreas;
        ::ll::TypedStorage<4, 8, ::std::optional<uint>>         mScope;
        ::ll::TypedStorage<1, 1, bool>                          mIsDeprecatedComponent;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~MemberDescriptor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct MemberFamily {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::string_view>                                  mPrefix;
        ::ll::TypedStorage<8, 40, ::std::basic_regex<char, ::std::regex_traits<char>>> mRegex;
        ::ll::TypedStorage<4, 4, uint>                                                 mMemberId;
        // NOLINTEND
    };

    struct SetterDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cereal::internal::BasicSchema>> mPtr;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cereal::Constraint>>            mConstraint;
        ::ll::TypedStorage<1, 1, ::cereal::ContextArea>                              mAllowedAreas;
        // NOLINTEND
    };

    struct TaggedVariantDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::entt::meta_type (*)(::entt::meta_ctx const&)> mResolve;
        ::ll::TypedStorage<8, 32, ::std::string>                                 mTaggedName;
        // NOLINTEND
    };

    struct TypeDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cereal::internal::BasicSchema>> mPtr;
        ::ll::TypedStorage<8, 32, ::std::string>                                     mName;
        ::ll::TypedStorage<8, 24, ::cereal::internal::BasicSchema::EnumMapping>      mEnumMapping;
        ::ll::TypedStorage<
            8,
            72,
            ::entt::dense_map<
                ::std::string,
                ::std::pair<::entt::meta_type (*)(::entt::meta_ctx const&), ::entt::basic_any<16, 8>>,
                ::cereal::util::internal::StringViewHash,
                ::std::equal_to<void>>>
                                                                                                mUserPropertiesMap;
        ::ll::TypedStorage<8, 24, ::std::vector<::cereal::internal::BasicSchema::MemberFamily>> mMemberFamilies;
        ::ll::TypedStorage<8, 32, ::std::string>                                                mErrorMessage;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~TypeDescriptor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    using DynamicGetterWrapper = ::entt::meta_any (*)(::entt::meta_any const&, ::cereal::SerializerContext const&);

    using DynamicSetterArgCtor = ::entt::meta_type (*)(::entt::meta_ctx const&);

    using IdType = uint;

    using OverridingSet = ::brstd::flat_set<
        ::cereal::internal::OverrideState,
        ::std::less<void>,
        ::std::vector<::cereal::internal::OverrideState>>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BasicSchema() = default;

    virtual bool isGreedy(::entt::meta_ctx const& ctx) const;

    virtual ::cereal::internal::VariantPriorityLevel minVariantPriorityLevel(::entt::meta_ctx const& ctx) const;

    virtual bool doMap(::entt::meta_any& src, ::entt::meta_any& dst, ::cereal::MetaVisitor& visitor) const;

    virtual ::cereal::internal::BasicSchema const& doUnwrap(::entt::meta_any& elem, bool fillIfEmpty) const;

    virtual void doLoad(
        ::cereal::SchemaReader&              reader,
        ::entt::meta_any&                    any,
        ::entt::meta_any const&              udata,
        ::cereal::internal::LoadState const& state
    ) const;

    virtual void doSave(
        ::cereal::SchemaWriter&              writer,
        ::entt::meta_any const&              any,
        ::cereal::internal::SaveState const& state
    ) const;

    virtual ::cereal::SchemaDescription
    makeDescription(::cereal::internal::ReflectionContext const& ctx, ::cereal::DescriptionConfig config) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void load(
        ::cereal::SchemaReader&              value,
        ::entt::meta_any&                    any,
        ::entt::meta_any const&              udata,
        ::cereal::internal::LoadState const& state
    ) const;

    MCAPI bool
    map(::cereal::internal::BasicSchema const& schema,
        ::entt::meta_any&                      src,
        ::entt::meta_any&                      dst,
        ::cereal::MetaVisitor&                 visitor) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isGreedy(::entt::meta_ctx const& ctx) const;

    MCFOLD ::cereal::internal::VariantPriorityLevel $minVariantPriorityLevel(::entt::meta_ctx const& ctx) const;

    MCFOLD bool $doMap(::entt::meta_any& src, ::entt::meta_any& dst, ::cereal::MetaVisitor& visitor) const;

    MCFOLD ::cereal::internal::BasicSchema const& $doUnwrap(::entt::meta_any& elem, bool fillIfEmpty) const;


    // NOLINTEND
};

} // namespace cereal::internal
