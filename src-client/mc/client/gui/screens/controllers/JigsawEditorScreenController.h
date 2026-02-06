#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/BlockScreenController.h"
#include "mc/world/level/levelgen/structure/JigsawEditorData.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ClientInstanceScreenModel;
class Player;
struct ActorUniqueID;
struct TextEditScreenEventData;
namespace Json { class Value; }
// clang-format on

class JigsawEditorScreenController : public ::BlockScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                 mTextBoxEditing;
    ::ll::TypedStorage<8, 144, ::JigsawEditorData> mTempData;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawEditorScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JigsawEditorScreenController() /*override*/ = default;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JigsawEditorScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );

    MCFOLD ::std::string _getTextEditValue(::TextEditScreenEventData& textEditEvent) const;

    MCAPI int _getTextEditValueAsInt(::TextEditScreenEventData& textEditEvent) const;

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::Player&                                      player,
        ::BlockPos const&                              pos,
        ::ActorUniqueID                                uniqueId
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $addStaticScreenVars(::Json::Value& globalVars);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
