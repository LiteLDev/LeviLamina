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
namespace mce { class Color; }
namespace ui { struct LayoutOffset; }
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
    MCAPI UIResolvedDef(
        ::std::vector<::Json::Value*>* variablesStack,
        ::std::string_view             defNamespace,
        ::std::string_view             defName,
        ::Json::Value const&           baseVal,
        ::Json::Value const&           overrideVal
    );

    MCAPI ::Json::Value const& _evaluate(::Json::Value const& value, bool forceExpressionEval) const;

    MCAPI void _pushVariables();

    MCAPI void _validateProperty(::std::string_view name) const;

    MCAPI void foreachMemberNames(::std::function<void(::std::string_view)> predicate) const;

    MCAPI ::ui::AnchorPoint getAsAnchorPoint(::std::string_view key, ::ui::AnchorPoint defaultValue) const;

    MCAPI ::ui::AnimationType getAsAnimationType(::std::string_view key, ::ui::AnimationType defaultValue) const;

    MCAPI ::BindingCondition getAsBindingCondition(::std::string_view key) const;

    MCAPI ::BindingType getAsBindingType(::std::string_view key) const;

    MCAPI bool getAsBool(::std::string_view key, bool defaultValue) const;

    MCAPI uint getAsButtonId(::std::string_view key, uint defaultValue) const;

    MCAPI ::ui::ClipDirection getAsClipDirection(::std::string_view key, ::ui::ClipDirection defaultValue) const;

    MCAPI ::mce::Color getAsColor(::std::string_view key, ::mce::Color const& defaultValue) const;

    MCAPI ::ui::Draggable getAsDraggable(::std::string_view key, ::ui::Draggable defaultValue) const;

    MCAPI float getAsFloat(::std::string_view key, float defaultValue) const;

    MCAPI ::ui::FontSize getAsFontSize(::std::string_view key, ::ui::FontSize defaultValue) const;

    MCAPI ::glm::ivec2 getAsGridSize(::std::string_view key, ::glm::ivec2 const& defaultValue) const;

    MCAPI int getAsInt(::std::string_view key, int defaultValue) const;

    MCAPI ::ui::LayoutOffset getAsLayoutSize(::std::string_view key, ::ui::LayoutOffset const& defaultValue) const;

    MCAPI ::ui::OrientationType getAsOrientation(::std::string_view key, ::ui::OrientationType defaultValue) const;

    MCAPI ::ui::PriorityRule getAsPriorityRule(::std::string_view key, ::ui::PriorityRule defaultValue) const;

    MCAPI ::std::unique_ptr<::UIPropertyBag>
    getAsPropertyBag(::std::string_view key, ::std::unique_ptr<::UIPropertyBag> defaultValue) const;

    MCAPI ::UiExpression getAsPropetyEvaluation(::std::string_view key) const;

    MCAPI ::glm::vec2 getAsSize(::std::string_view key, ::glm::vec2 const& defaultValue) const;

    MCAPI ::ui::SliceSize getAsSliceSize(::std::string_view key, ::ui::SliceSize const& defaultValue) const;

    MCAPI ::SliderManagerBehavior getAsSliderManagerBehavior(::std::string_view key, ::SliderManagerBehavior) const;

    MCAPI ::std::string getAsString(::std::string_view key, ::std::string_view defaultValue) const;

    MCAPI ::std::vector<::std::string>
    getAsStringVector(::std::string_view key, ::std::vector<::std::string> const& defaultValue) const;

    MCAPI ::ui::TextAlignment getAsTextAlignment(::std::string_view key, ::ui::TextAlignment defaultValue) const;

    MCAPI ::std::string getAsTextureString() const;

    MCAPI ::ToggleManagerBehavior getAsToggleManagerBehavior(::std::string_view key, ::ToggleManagerBehavior) const;

    MCAPI ::glm::vec2 getAsUV(::std::string_view key, ::glm::vec2 const& defaultValue) const;

    MCAPI ::UIDefType getDefType() const;

    MCAPI ::Json::Value const& getValue(::std::string_view key, bool forceExpressionEval) const;

    MCAPI bool hasValue(::std::string_view key) const;

    MCAPI ~UIResolvedDef();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string
    _replaceVarsInRefString(::std::string_view refString, ::std::vector<::Json::Value*>* variablesStack);

    MCAPI static ::UIResolvedDef create(
        ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> defRepo,
        ::std::vector<::Json::Value*>*                          variablesStack,
        ::std::string_view                                      currNamespace,
        ::std::string_view                                      name
    );

    MCAPI static ::UIResolvedDef createWithDef(
        ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> defRepo,
        ::std::vector<::Json::Value*>*                          variablesStack,
        ::std::string_view                                      currNamespace,
        ::Json::Value const&                                    def
    );

    MCAPI static ::Json::Value evaluate(
        ::Json::Value const&                 value,
        ::std::vector<::Json::Value*> const& variablesStack,
        ::Json::Value const*                 optionalLocalStack
    );

    MCAPI static void parseName(
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
    MCAPI static ::UIResolvedDef& mNull();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
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
    MCAPI void $dtor();
    // NOLINTEND
};
