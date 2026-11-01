#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/AnchorPoint.h"
#include "mc/client/gui/AnimationType.h"
#include "mc/client/gui/ClipDirection.h"
#include "mc/client/gui/Draggable.h"
#include "mc/client/gui/FontSize.h"
#include "mc/client/gui/OrientationType.h"
#include "mc/client/gui/PriorityRule.h"
#include "mc/client/gui/TextAlignment.h"
#include "mc/client/gui/UIDefType.h"
#include "mc/client/gui/controls/BindingCondition.h"
#include "mc/client/gui/controls/BindingType.h"
#include "mc/client/gui/controls/SliderManagerBehavior.h"
#include "mc/client/gui/controls/ToggleManagerBehavior.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
class IUIDefRepository;
class UIPropertyBag;
class UiExpression;
class Vec2;
namespace mce { class Color; }
namespace ui { struct SliceSize; }
// clang-format on

class UIResolvedDef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                          mIgnored;
    ::ll::TypedStorage<8, 32, ::std::string const>                          mDefNamespace;
    ::ll::TypedStorage<8, 32, ::std::string const>                          mDefName;
    ::ll::TypedStorage<8, 8, ::Json::Value const&>                          mBaseVal;
    ::ll::TypedStorage<8, 8, ::Json::Value const&>                          mOverrideVal;
    ::ll::TypedStorage<8, 16, ::Json::Value>                                mVariables;
    ::ll::TypedStorage<8, 8, ::std::vector<::Json::Value*>*>                mVariablesStack;
    ::ll::TypedStorage<8, 16, ::std::set<::std::string, ::std::less<void>>> mUnvalidatedProperties;
    // NOLINTEND

public:
    // prevent constructor by default
    UIResolvedDef& operator=(UIResolvedDef const&);
    UIResolvedDef(UIResolvedDef const&);
    UIResolvedDef();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UIResolvedDef(
        ::std::vector<::Json::Value*>* variablesStack,
        ::std::string_view             defNamespace,
        ::std::string_view             defName,
        ::Json::Value const&           baseVal,
        ::Json::Value const&           overrideVal
    );

    MCNAPI ::Json::Value const& _evaluate(::Json::Value const& value, bool forceExpressionEval) const;

    MCNAPI void _validateProperty(::std::string_view name) const;

    MCNAPI void foreachMemberNames(::std::function<void(::std::string_view)> predicate) const;

    MCNAPI ::ui::AnchorPoint getAsAnchorPoint(::std::string_view key, ::ui::AnchorPoint defaultValue) const;

    MCNAPI ::ui::AnimationType getAsAnimationType(::std::string_view key, ::ui::AnimationType defaultValue) const;

    MCNAPI ::BindingCondition getAsBindingCondition(::std::string_view key) const;

    MCNAPI ::BindingType getAsBindingType(::std::string_view key) const;

    MCNAPI uint getAsButtonId(::std::string_view key, uint defaultValue) const;

    MCNAPI ::ui::ClipDirection getAsClipDirection(::std::string_view key, ::ui::ClipDirection defaultValue) const;

    MCNAPI ::Vec2 getAsClipOffset(::std::string_view key) const;

    MCNAPI ::mce::Color getAsColor(::std::string_view key, ::mce::Color const& defaultValue) const;

    MCNAPI ::ui::Draggable getAsDraggable(::std::string_view key, ::ui::Draggable defaultValue) const;

    MCNAPI ::ui::FontSize getAsFontSize(::std::string_view key, ::ui::FontSize defaultValue) const;

    MCNAPI ::glm::ivec2 getAsGridSize(::std::string_view key, ::glm::ivec2 const& defaultValue) const;

    MCNAPI ::ui::OrientationType getAsOrientation(::std::string_view key, ::ui::OrientationType defaultValue) const;

    MCNAPI ::ui::PriorityRule getAsPriorityRule(::std::string_view key, ::ui::PriorityRule defaultValue) const;

    MCNAPI ::std::unique_ptr<::UIPropertyBag>
    getAsPropertyBag(::std::string_view key, ::std::unique_ptr<::UIPropertyBag> defaultValue) const;

    MCNAPI ::UiExpression getAsPropetyEvaluation(::std::string_view key) const;

    MCNAPI ::glm::vec2 getAsSize(::std::string_view key, ::glm::vec2 const& defaultValue) const;

    MCNAPI ::ui::SliceSize getAsSliceSize(::std::string_view key, ::ui::SliceSize const& defaultValue) const;

    MCNAPI ::SliderManagerBehavior getAsSliderManagerBehavior(::std::string_view key, ::SliderManagerBehavior) const;

    MCNAPI ::std::string getAsString(::std::string_view key, ::std::string_view defaultValue) const;

    MCNAPI ::std::vector<::std::string>
    getAsStringVector(::std::string_view key, ::std::vector<::std::string> const& defaultValue) const;

    MCNAPI ::ui::TextAlignment getAsTextAlignment(::std::string_view key, ::ui::TextAlignment defaultValue) const;

    MCNAPI ::std::string getAsTextureString() const;

    MCNAPI ::ToggleManagerBehavior getAsToggleManagerBehavior(::std::string_view key, ::ToggleManagerBehavior) const;

    MCNAPI ::glm::vec2 getAsUV(::std::string_view key, ::glm::vec2 const& defaultValue) const;

    MCNAPI ::glm::vec2 getAsUVSize(::std::string_view key, ::glm::vec2 const& defaultValue) const;

    MCNAPI ::UIDefType getDefType() const;

    MCNAPI ::Json::Value const& getValue(::std::string_view key, bool forceExpressionEval) const;

    MCNAPI bool hasValue(::std::string_view key) const;

    MCNAPI ~UIResolvedDef();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::UIResolvedDef create(
        ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> defRepo,
        ::std::vector<::Json::Value*>*                          variablesStack,
        ::std::string_view                                      currNamespace,
        ::std::string_view                                      name
    );

    MCNAPI static ::UIResolvedDef createWithDef(
        ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> defRepo,
        ::std::vector<::Json::Value*>*                          variablesStack,
        ::std::string_view                                      currNamespace,
        ::Json::Value const&                                    def
    );

    MCNAPI static ::Json::Value evaluate(
        ::Json::Value const&                 value,
        ::std::vector<::Json::Value*> const& variablesStack,
        ::Json::Value const*                 optionalLocalStack
    );

    MCNAPI static void parseName(
        ::std::string_view             input,
        ::std::string&                 outName,
        ::std::string&                 outNamespace,
        ::std::string&                 outRef,
        ::std::vector<::Json::Value*>* variablesStack
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::UIResolvedDef& mNull();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::vector<::Json::Value*>* variablesStack,
        ::std::string_view             defNamespace,
        ::std::string_view             defName,
        ::Json::Value const&           baseVal,
        ::Json::Value const&           overrideVal
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
