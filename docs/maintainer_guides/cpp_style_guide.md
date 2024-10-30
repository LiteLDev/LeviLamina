# C++ Style Guide

## Naming

### Directory Names

In snake case, e.g. `my_directory`

### File Names

In pascal case, e.g. `MyFile.cpp`. For single-class files, the filename should be consistent with the class name.

### Type Names

In pascal case, e.g. `MyClass`. Names of all types including classes, structs, type aliases, enums and type template parameters should follow this rule.

### Variable Names

#### Common Variable Names

In camel case, e.g. `myVariable`.

#### Class and Struct Data Members

For non-public ones, in Hungarian, e.g. `mMyMember`.

For public ones, in camelCase, e.g. `myMember`.

### Constant Names

In Pascal case, e.g. `MyConst`.

### Function Names

In camel case, e.g. `myFunction`.

### Namespace Names

In lower case, e.g. `my_namespace`.

### Enumerator Names

In pascal case, e.g. `MyEnumerator`.

### Macro Names

In upper snake case, e.g. `MY_MACRO`.

## Comments

### Comment Style

Use `// ...` for end-of-line comments. Use `/* ... */` for mid-line comments. Use `/// ...` for Doxygen comments.

### File Comments

Start each file with license boilerplate.

If a source file (such as a .h file) declares multiple user-facing abstractions (common functions, related classes, etc.), include a comment describing the collection of those abstractions.

### Struct and Class Comments

Every non-obvious class or struct declaration should have an accompanying comment that describes what it is for and how it should be used, including at least a brief introduction and public attribute description.

For separated classes, e.g. `.h` and `.cpp`, comments should go with header files.

### Function Comments

Including at least a brief introduction, parameter and return value description, and exception description.

### Variable Comments

#### Class Data Members

All public members should have a comment.

#### Global Variables

All global variables should have a comment describing what they are, what they are used for, and (if unclear) why they need to be global.

### Implementation Comments

In third-person tense.

### Function Argument Comments

If function arguments are not clear, comments should be added, e.g. `/*count=*/`.

### TODO Comments

TODOs should include the string TODO in all caps, followed by the issue ID and the description referenced by the TODO, e.g. `// TODO(#1234): Update this list after the Foo service is turned down.`.

