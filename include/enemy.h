#ifndef ENEMY_H
#define ENEMY_H
#include "actor.h"
#include "bullet.h"

typedef struct {
    actor* actor;
    enemy_bullet** bullets;
    boolean is_active;

    int bullets_count;
    float default_shoot_cd;
    float shoot_cd;
} enemy;

enemy* create_enemy();
void set_enemy_spawnpoint(SDL_Rect* rect);
void instantiate_enemy(enemy* en);
void enemy_ready_to_shoot(enemy* en);
void enemy_shoot(enemy* enemy, bullet* bullet);
void check_enemy_bounds(enemy* pos_rect);
void update_enemy_movement(enemy* en); 
void update_enemy_bullets(enemy* en);
void update_enemy(enemy* en); 
void enemy_take_damage(enemy* enemy, float damage);

#endif