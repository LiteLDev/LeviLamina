#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/BindingFactory.h"
#include "mc/deps/input/BindingFactoryMap.h"

// auto generated forward declare list
// clang-format off
class RectangleArea;
struct ControllerIDtoClientMap;
// clang-format on

class MinecraftBindingFactoryMap : public ::BindingFactoryMap {
public:
    // MinecraftBindingFactoryMap inner types declare
    // clang-format off
    class NullBindingFactory;
    // clang-format on

    // MinecraftBindingFactoryMap inner types define
    class NullBindingFactory : public ::BindingFactory {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::std::function<bool()> getBooleanBinding(uint name) const /*override*/;

        virtual ::std::function<float()> getFloatBinding(uint) const /*override*/;

        virtual ::std::function<::std::string()> getStringBinding(uint) const /*override*/;

        virtual ::std::function<::glm::vec2()> getPointBinding(uint) const /*override*/;

        virtual ::std::function<::RectangleArea()> getAreaBinding(uint) const /*override*/;

        virtual ::std::function<void(::RectangleArea)> getDynamicAreaBinding(uint) const /*override*/;

        virtual ::std::function<void(float)> getFloatSetter(uint) const /*override*/;

        virtual void setCustomAreaBinding(::std::string const&, ::RectangleArea) /*override*/;

        virtual void removeCustomAreaBinding(::std::string const&) /*override*/;

        virtual ::std::vector<uint> getCustomAreaBindingNames() const /*override*/;

        virtual ~NullBindingFactory() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCAPI ::std::function<bool()> $getBooleanBinding(uint name) const;

        MCAPI ::std::function<float()> $getFloatBinding(uint) const;

        MCAPI ::std::function<::std::string()> $getStringBinding(uint) const;

        MCAPI ::std::function<::glm::vec2()> $getPointBinding(uint) const;

        MCAPI ::std::function<::RectangleArea()> $getAreaBinding(uint) const;

        MCAPI ::std::function<void(::RectangleArea)> $getDynamicAreaBinding(uint) const;

        MCAPI ::std::function<void(float)> $getFloatSetter(uint) const;

        MCFOLD void $setCustomAreaBinding(::std::string const&, ::RectangleArea);

        MCFOLD void $removeCustomAreaBinding(::std::string const&);

        MCFOLD ::std::vector<uint> $getCustomAreaBindingNames() const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap const>> mCIDToClientMap;
    ::ll::TypedStorage<8, 8, ::MinecraftBindingFactoryMap::NullBindingFactory const>          mNullBindingFactory;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BindingFactory const& getBindingFactory(int controllerId) const /*override*/;

    virtual ~MinecraftBindingFactoryMap() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BindingFactory const& $getBindingFactory(int controllerId) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
