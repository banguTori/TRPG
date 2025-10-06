#pragma once

enum class TYPE { NONE = 0, ITEM, WEAPON, ARMOR, MAX };
enum class ROLE { NONE = 0, WARRIROR, MAGICIAN, THIEF, MAX };
enum class PART { NONE = 0, HELMET, CHEST, GLOVES, SHOES, MAX };
enum class LEVEL { NONE = 0, LOW, MED, HIGH, MAX };

enum class RETURN_STATE { RETRY, NEXT, EXIT, MAX };