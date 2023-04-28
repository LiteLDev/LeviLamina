/**
 * @file  npc.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA


namespace npc {

#define AFTER_EXTRA
// Add Member There

struct UrlAction {

public:
    struct UrlAction& operator=(struct UrlAction const&) = delete;
    UrlAction(struct UrlAction const&) = delete;
    UrlAction() = delete;

public:
    /**
     * @symbol ??9UrlAction\@npc\@\@QEBA_NAEBU01\@\@Z
     */
    MCAPI bool operator!=(struct UrlAction const&) const;
    /**
     * @symbol ??1UrlAction\@npc\@\@QEAA\@XZ
     */
    MCAPI ~UrlAction();
};

struct ActionValue {
    std::string mRawText;
    std::string mText;

public:
    struct ActionValue& operator=(struct ActionValue const&) = delete;
    ActionValue(struct ActionValue const&) = delete;
//    ActionValue() = delete;

public:
    /**
     * @symbol ??0ActionValue\@npc\@\@QEAA\@XZ
     */
    MCAPI ActionValue();
    /**
     * @symbol ??4ActionValue\@npc\@\@QEAAAEAU01\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI struct ActionValue& operator=(class std::basic_string_view<char, struct std::char_traits<char>>);
    /**
     * @symbol ?rawValue\@ActionValue\@npc\@\@QEBA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::basic_string_view<char, struct std::char_traits<char>> rawValue() const;
    /**
     * @symbol ??1ActionValue\@npc\@\@QEAA\@XZ
     */
    MCAPI ~ActionValue();
};

struct StoredCommand {

public:
    struct StoredCommand& operator=(struct StoredCommand const&) = delete;
    StoredCommand(struct StoredCommand const&) = delete;
    StoredCommand() = delete;

public:
    /**
     * @symbol
     * ??0StoredCommand\@npc\@\@QEAA\@W4CurrentCmdVersion\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI StoredCommand(enum class CurrentCmdVersion,
                        class std::basic_string_view<char, struct std::char_traits<char>>);
    /**
     * @symbol ??1StoredCommand\@npc\@\@QEAA\@XZ
     */
    MCAPI ~StoredCommand();
};

struct Button {

public:
    struct Button& operator=(struct Button const&) = delete;
    Button(struct Button const&) = delete;
//    Button() = delete;

public:
    /**
     * @symbol ??0Button\@npc\@\@QEAA\@XZ
     */
    MCAPI Button();
    /**
     * @symbol ??4Button\@npc\@\@QEAAAEAU01\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI struct Button& operator=(class std::basic_string_view<char, struct std::char_traits<char>>);
    /**
     * @symbol ??1Button\@npc\@\@QEAA\@XZ
     */
    MCAPI ~Button();
};

enum class ActionMode : __int8 {
    BUTTON = 0x0,
    CLOSE = 0x1,
    OPEN = 0x2,
};

struct CommandAction {
    npc::ActionValue mActionValue;
    npc::Button mButton;
    npc::ActionMode mActionMode;
    std::vector<npc::StoredCommand> mCmds;

public:
    struct CommandAction& operator=(struct CommandAction const&) = delete;
    CommandAction(struct CommandAction const&) = delete;
    CommandAction() = delete;

public:
    /**
     * @symbol ??9CommandAction\@npc\@\@QEBA_NAEBU01\@\@Z
     */
    MCAPI bool operator!=(struct CommandAction const&) const;
    /**
     * @symbol ??1CommandAction\@npc\@\@QEAA\@XZ
     */
    MCAPI ~CommandAction();
};


struct ActionContainer {

public:
    struct ActionContainer& operator=(struct ActionContainer const&) = delete;
    ActionContainer(struct ActionContainer const&) = delete;
    ActionContainer() = delete;

public:
    /**
     * @symbol ?at\@ActionContainer\@npc\@\@QEAAPEAV?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@_K\@Z
     */
    MCAPI class std::variant<struct npc::CommandAction, struct npc::UrlAction>* at(unsigned __int64);
    /**
     * @symbol ?at\@ActionContainer\@npc\@\@QEBAPEBV?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@_K\@Z
     */
    MCAPI class std::variant<struct npc::CommandAction, struct npc::UrlAction> const* at(unsigned __int64) const;
    /**
     * @symbol ?countUrl\@ActionContainer\@npc\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 countUrl() const;
    /**
     * @symbol
     * ?data\@ActionContainer\@npc\@\@QEBAAEBV?$vector\@V?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@V?$allocator\@V?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<class std::variant<struct npc::CommandAction, struct npc::UrlAction>> const& data() const;
    /**
     * @symbol ?push\@ActionContainer\@npc\@\@QEAAX$$QEAV?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@\@Z
     */
    MCAPI void push(class std::variant<struct npc::CommandAction, struct npc::UrlAction>&&);
    /**
     * @symbol
     * ?reset\@ActionContainer\@npc\@\@QEAAX$$QEAV?$vector\@V?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@V?$allocator\@V?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void reset(std::vector<class std::variant<struct npc::CommandAction, struct npc::UrlAction>>&&);
    /**
     * @symbol ?size\@ActionContainer\@npc\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 size() const;
    /**
     * @symbol ??1ActionContainer\@npc\@\@QEAA\@XZ
     */
    MCAPI ~ActionContainer();
};


#undef AFTER_EXTRA
    /**
     * @symbol ?COMMAND_DELIMITER\@npc\@\@3DB
     */
    MCAPI extern char const COMMAND_DELIMITER;
    /**
     * @symbol ?COMMAND_PERMISSION\@npc\@\@3W4CommandPermissionLevel\@\@B
     */
    MCAPI extern enum class CommandPermissionLevel const COMMAND_PERMISSION;
    /**
     * @symbol ?MAX_NAME_LENGTH\@npc\@\@3_KB
     */
    MCAPI extern unsigned __int64 const MAX_NAME_LENGTH;
    /**
     * @symbol ?UNUSED_ACTION_INDEX\@npc\@\@3_KB
     */
    MCAPI extern unsigned __int64 const UNUSED_ACTION_INDEX;
    /**
     * @symbol ?fillCommands\@npc\@\@YAXAEAUCommandAction\@1\@AEBV?$vector\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@V?$allocator\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@2\@\@std\@\@W4CurrentCmdVersion\@\@\@Z
     */
    MCAPI void fillCommands(struct npc::CommandAction &, std::vector<class std::basic_string_view<char, struct std::char_traits<char>>> const &, enum class CurrentCmdVersion);
    /**
     * @symbol ?fromJson\@npc\@\@YA?AV?$optional\@V?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI class std::optional<class std::variant<struct npc::CommandAction, struct npc::UrlAction>> fromJson(class Json::Value const &);
    /**
     * @symbol ?handlePacket\@npc\@\@YAXAEAVActor\@\@AEAVPlayer\@\@AEAVNpcComponent\@\@AEBVNpcRequestPacket\@\@\@Z
     */
    MCAPI void handlePacket(class Actor &, class Player &, class NpcComponent &, class NpcRequestPacket const &);
    /**
     * @symbol ?hasCreatePermission\@npc\@\@YA_NAEAVActor\@\@\@Z
     */
    MCAPI bool hasCreatePermission(class Actor &);
    /**
     * @symbol ?toJson\@npc\@\@YA?AVValue\@Json\@\@AEBV?$variant\@UCommandAction\@npc\@\@UUrlAction\@2\@\@std\@\@\@Z
     */
    MCAPI class Json::Value toJson(class std::variant<struct npc::CommandAction, struct npc::UrlAction> const &);
    /**
     * @symbol ?toJson\@npc\@\@YA?AVValue\@Json\@\@AEBUActionContainer\@1\@\@Z
     */
    MCAPI class Json::Value toJson(struct npc::ActionContainer const &);
    /**
     * @symbol ?toJson\@npc\@\@YA?AVValue\@Json\@\@AEBUUrlAction\@1\@\@Z
     */
    MCAPI class Json::Value toJson(struct npc::UrlAction const &);
    /**
     * @symbol ?toJson\@npc\@\@YA?AVValue\@Json\@\@AEBUCommandAction\@1\@\@Z
     */
    MCAPI class Json::Value toJson(struct npc::CommandAction const &);
    /**
     * @symbol ?toString\@npc\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUActionContainer\@1\@\@Z
     */
    MCAPI std::string toString(struct npc::ActionContainer const &);

};