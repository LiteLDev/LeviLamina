def _llse_python_base_lib_listener(event):
    def wrapper(func):
        __builtins__.mc.listen(event, func)
        return func

    return wrapper


def _llse_python_base_lib_command_callback(self, func):
    self.setCallback(func)
    return func


setattr(__builtins__, "listener", _llse_python_base_lib_listener)
setattr(__builtins__.LLSE_Command, "callback", _llse_python_base_lib_command_callback)
