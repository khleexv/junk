import enum

class Color(enum.Enum):
    RED = 0
    GREEN = 1
    BLUE = 2

def red():
    return Color.RED