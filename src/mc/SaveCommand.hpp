/**
 * @file  SaveCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SaveCommand.
 *
 */
class SaveCommand : public Command {

#define AFTER_EXTRA
// Add Member There
public:
enum class State;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SAVECOMMAND
public:
    class SaveCommand& operator=(class SaveCommand const &) = delete;
    SaveCommand(class SaveCommand const &) = delete;
    SaveCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SaveCommand();
    /**
     * @vftbl  1
     * @symbol  ?execute\@SaveCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?setup\@SaveCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol  ?saveHold\@SaveCommand\@\@CAXAEAVCommandOutput\@\@\@Z
     */
    MCAPI static void saveHold(class CommandOutput &);
    /**
     * @symbol  ?saveResume\@SaveCommand\@\@CAXAEAVCommandOutput\@\@\@Z
     */
    MCAPI static void saveResume(class CommandOutput &);
    /**
     * @symbol  ?saveState\@SaveCommand\@\@CAXAEAVCommandOutput\@\@\@Z
     */
    MCAPI static void saveState(class CommandOutput &);

private:
    /**
     * @symbol  ?mSaveAllFileList\@SaveCommand\@\@0V?$vector\@USnapshotFilenameAndLength\@\@V?$allocator\@USnapshotFilenameAndLength\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::vector<struct SnapshotFilenameAndLength> mSaveAllFileList;
    /**
     * @symbol  ?mSaveAllMutex\@SaveCommand\@\@0Vmutex\@std\@\@A
     */
    MCAPI static class std::mutex mSaveAllMutex;
    /**
     * @symbol  ?mState\@SaveCommand\@\@0W4State\@1\@A
     */
    MCAPI static enum class SaveCommand::State mState;

};