#ifdef EXTRA_INCLUDE_PART_TELEPORTTARGET
// Add include headers & pre-declares
#else
// Add new members to class
struct UnknownStruct {
    char filler[40];
};
char filler[40]; // IDA TeleportCommand::computeTarget
UnknownStruct* unk40;

public:

#endif