#pragma once
#pragma region Property

#define Property(type, name)      \
    property type name            \
    {                             \
        inline type get()         \
        {                         \
            return _this->name;   \
        }                         \
        inline void set(type arg) \
        {                         \
            _this->name = arg;    \
        }                         \
    }

#define Property_Instance(Namespace, type, name)       \
    property Namespace::type ^ name {                  \
        inline Namespace::type ^ get() {               \
            return gcnew Namespace::type(_this->name); \
        } inline void                                  \
            set(Namespace::type ^ arg)                 \
        {                                              \
            _this->name = arg;                         \
        }                                              \
    }

#define Property_Ptr(Namespace, type, name)            \
    property Namespace::type ^ name {                  \
        inline Namespace::type ^ get() {               \
            return gcnew Namespace::type(_this->name); \
        } inline void                                  \
            set(Namespace::type ^ arg)                 \
        {                                              \
            _this->name = arg->NativePtr;              \
        }                                              \
    }

#define Property_Enum(type, nativeEnum, name)  \
    property type name                         \
    {                                          \
        inline type get()                      \
        {                                      \
            return ((type)(_this->name));      \
        }                                      \
        inline void set(type arg)              \
        {                                      \
            _this->name = ((nativeEnum)(arg)); \
        }                                      \
    }

#define Property_String(name)                                    \
    property System::String ^ name {                             \
        inline System::String ^ get() {                          \
            return marshalString<Encoding::E_UTF8>(_this->name); \
        } inline void                                            \
            set(System::String ^ arg)                            \
        {                                                        \
            _this->name = marshalString<Encoding::E_UTF8>(arg);  \
        }                                                        \
    }

#define Property_ReadOnly(type, name) \
    property type name                \
    {                                 \
        inline type get()             \
        {                             \
            return _this->name;       \
        }                             \
    }

#define Property_Instance_ReadOnly(Namespace, type, name) \
    property Namespace::type ^ name {                     \
        inline Namespace::type ^ get() {                  \
            return gcnew Namespace::type(_this->name);    \
        }                                                 \
    }

#define Property_Ptr_ReadOnly(Namespace, type, name)          \
    property Namespace::type ^ name {                         \
        inline Namespace::type ^ get() {                      \
            return gcnew Namespace::type((void*)_this->name); \
        }                                                     \
    }

#define Property_Enum_ReadOnly(type, nativeEnum, name) \
    property type name                                 \
    {                                                  \
        inline type get()                              \
        {                                              \
            return ((type)(_this->name));              \
        }                                              \
    }

#define Property_String_ReadOnly(name)       \
    property System::String ^ name {         \
        inline System::String ^ get() {      \
            return toSysString(_this->name); \
        }                                    \
    }

#pragma endregion
