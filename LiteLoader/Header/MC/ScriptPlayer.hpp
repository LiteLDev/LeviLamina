// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptObject.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptPlayer : public ScriptObject {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPLAYER
public:
    class ScriptPlayer& operator=(class ScriptPlayer const &) = delete;
    ScriptPlayer(class ScriptPlayer const &) = delete;
    ScriptPlayer() = delete;
#endif

public:
    /*0*/ virtual ~ScriptPlayer();
    /*4*/ virtual class Scripting::Result<std::string> getNameTag() const;
    /*5*/ virtual class Scripting::Result<void> setNameTag(std::string const &) const;
    /*6*/ virtual class Scripting::Result<bool> getSneaking() const;
    /*7*/ virtual class Scripting::Result<void> setSneaking(bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTPLAYER
public:
#endif
    MCAPI ScriptPlayer(class Player const &, class Scripting::WeakLifetimeScope const &);
    MCAPI class Scripting::Result<int> getItemCooldownLeft(std::string const &);
    MCAPI class Scripting::Result<std::string> getName() const;
    MCAPI class Scripting::Result<int> getSelectedSlot() const;
    MCAPI class Scripting::Result<void> playSound(std::string const &, class std::optional<struct ScriptSoundOptions>);
    MCAPI class Scripting::Result<void> postClientMessage(std::string const &, std::string const &);
    MCAPI class Scripting::Result<void> setSelectedSlot(int) const;
    MCAPI class Scripting::Result<void> startItemCooldown(std::string const &, int);
    MCAPI class Player * tryGetPlayer() const;
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptPlayer> getHandle(class Player const &, class Scripting::WeakLifetimeScope const &);
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptPlayer> getHandle(class StackRefResultT<struct EntityRefTraits>, class Scripting::WeakLifetimeScope const &);



};