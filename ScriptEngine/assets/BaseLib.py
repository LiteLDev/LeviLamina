def _llse_python_base_lib_handle(event):
    def wrapper(func):
        __builtins__.mc.listen(event, func)
        return func

    return wrapper


def _llse_python_base_lib_command_handle(self, func=None):
    def wrapper(func):
        self.setCallback(func)
        return func
    
    if func:
        return wrapper(func)
    return wrapper


setattr(__builtins__, "handle", _llse_python_base_lib_handle)
setattr(__builtins__.LLSE_Command, "handle", _llse_python_base_lib_command_handle)
