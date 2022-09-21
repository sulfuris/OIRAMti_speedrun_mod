#ifndef IMAGES_H
#define IMAGES_H

#include <graphx.h>

extern gfx_sprite_t *tileset_tiles[256];

extern gfx_sprite_t oiram_0_buffer_left[27*27 + 2];
extern gfx_sprite_t oiram_1_buffer_left[27*27 + 2];
extern gfx_sprite_t oiram_0_buffer_right[27*27 + 2];
extern gfx_sprite_t oiram_1_buffer_right[27*27 + 2];

extern gfx_sprite_t *coin_sprite;
extern gfx_sprite_t *oiram_0_small;
extern gfx_sprite_t *oiram_1_small;
extern gfx_sprite_t *oiram_0_big;
extern gfx_sprite_t *oiram_1_big;
extern gfx_sprite_t *oiram_0_fire;
extern gfx_sprite_t *oiram_1_fire;
extern gfx_sprite_t *oiram_0_racoon;
extern gfx_sprite_t *oiram_1_racoon;
extern gfx_sprite_t *oiram_crouch_big;
extern gfx_sprite_t *oiram_crouch_fire;
extern gfx_sprite_t *oiram_crouch_racoon;
extern gfx_sprite_t *oiram_fail;
extern gfx_sprite_t *mushroom;
extern gfx_sprite_t *fire_flower;
extern gfx_sprite_t *goomba_0;
extern gfx_sprite_t *goomba_1;
extern gfx_sprite_t *goomba_flat;
extern gfx_sprite_t *koopa_red_right_0;
extern gfx_sprite_t *koopa_red_right_1;
extern gfx_sprite_t *koopa_red_left_0;
extern gfx_sprite_t *koopa_red_left_1;
extern gfx_sprite_t *koopa_red_shell_0;
extern gfx_sprite_t *koopa_red_shell_1;
extern gfx_sprite_t *koopa_green_right_0;
extern gfx_sprite_t *koopa_green_right_1;
extern gfx_sprite_t *koopa_green_left_0;
extern gfx_sprite_t *koopa_green_left_1;
extern gfx_sprite_t *koopa_green_shell_0;
extern gfx_sprite_t *koopa_green_shell_1;
extern gfx_sprite_t *koopa_bones_right_0;
extern gfx_sprite_t *koopa_bones_right_1;
extern gfx_sprite_t *koopa_bones_left_0;
extern gfx_sprite_t *koopa_bones_left_1;
extern gfx_sprite_t *koopa_bones_dead_left;
extern gfx_sprite_t *koopa_bones_dead_right;
extern gfx_sprite_t *chomper_0;
extern gfx_sprite_t *chomper_1;
extern gfx_sprite_t *chomper_fire_down_left;
extern gfx_sprite_t *chomper_fire_down_right;
extern gfx_sprite_t *chomper_fire_up_left;
extern gfx_sprite_t *chomper_fire_up_right;
extern gfx_sprite_t *chomper_body;
extern gfx_sprite_t *fire_0;
extern gfx_sprite_t *fire_1;
extern gfx_sprite_t *poof_0;
extern gfx_sprite_t *poof_1;
extern gfx_sprite_t *flame_fire_up_0;
extern gfx_sprite_t *flame_fire_up_1;
extern gfx_sprite_t *flame_fire_down_0;
extern gfx_sprite_t *flame_fire_down_1;
extern gfx_sprite_t *thwomp_0;
extern gfx_sprite_t *boo_left_hide;
extern gfx_sprite_t *boo_right_hide;
extern gfx_sprite_t *boo_left;
extern gfx_sprite_t *boo_right;
extern gfx_sprite_t *bullet_left;
extern gfx_sprite_t *cannonball_sprite;
extern gfx_sprite_t *wing_left_0;
extern gfx_sprite_t *wing_left_1;
extern gfx_sprite_t *wing_right_0;
extern gfx_sprite_t *wing_right_1;
extern gfx_sprite_t *star_0;
extern gfx_sprite_t *easter_egg_0;
extern gfx_sprite_t *easter_egg_1;
extern gfx_sprite_t *oiram_lives;
extern gfx_sprite_t *timer;
extern gfx_sprite_t *one_up;
extern gfx_sprite_t *oiram_up_small_0;
extern gfx_sprite_t *oiram_up_small_1;
extern gfx_sprite_t *oiram_up_big_0;
extern gfx_sprite_t *oiram_up_big_1;
extern gfx_sprite_t *oiram_up_fire_0;
extern gfx_sprite_t *oiram_up_fire_1;
extern gfx_sprite_t *fish_left_0;
extern gfx_sprite_t *fish_left_1;
extern gfx_sprite_t *fish_right_0;
extern gfx_sprite_t *fish_right_1;
extern gfx_sprite_t *mushroom_1up;
extern gfx_sprite_t *spike_left_0;
extern gfx_sprite_t *spike_left_1;
extern gfx_sprite_t *spike_right_0;
extern gfx_sprite_t *spike_right_1;
extern gfx_sprite_t *spike_shell_0;
extern gfx_sprite_t *spike_shell_1;

extern gfx_sprite_t *oiram_start;

extern gfx_sprite_t *fireball_sprite;
extern gfx_sprite_t *goomba_sprite;
extern gfx_sprite_t *chomper_sprite;
extern gfx_sprite_t *wing_left_sprite;
extern gfx_sprite_t *wing_right_sprite;
extern gfx_sprite_t *koopa_red_left_sprite;
extern gfx_sprite_t *koopa_red_right_sprite;
extern gfx_sprite_t *koopa_green_left_sprite;
extern gfx_sprite_t *koopa_green_right_sprite;
extern gfx_sprite_t *koopa_bones_left_sprite;
extern gfx_sprite_t *koopa_bones_right_sprite;
extern gfx_sprite_t *spike_left_sprite;
extern gfx_sprite_t *spike_right_sprite;
extern gfx_sprite_t *flame_sprite_up;
extern gfx_sprite_t *flame_sprite_down;
extern gfx_sprite_t *fish_left_sprite;
extern gfx_sprite_t *fish_right_sprite;

extern gfx_sprite_t *oiram_right[2];
extern gfx_sprite_t *oiram_left[2];

extern gfx_sprite_t *oiram_logo;

extern gfx_sprite_t *score_100;
extern gfx_sprite_t *score_200;
extern gfx_sprite_t *score_400;
extern gfx_sprite_t *score_800;
extern gfx_sprite_t *score_1000;
extern gfx_sprite_t *score_2000;
extern gfx_sprite_t *score_4000;
extern gfx_sprite_t *score_8000;

extern gfx_sprite_t *leaf_left;
extern gfx_sprite_t *leaf_right;

extern gfx_sprite_t *oiram_up_racoon_0;
extern gfx_sprite_t *oiram_up_racoon_1;

extern gfx_sprite_t *tail_left_0;
extern gfx_sprite_t *tail_right_0;

extern gfx_rletsprite_t *reswob_left_0;
extern gfx_rletsprite_t *reswob_left_1;
extern gfx_rletsprite_t *reswob_right_0;
extern gfx_rletsprite_t *reswob_right_1;
extern gfx_rletsprite_t *reswob_down;

extern gfx_sprite_t *door_top;
extern gfx_sprite_t *door_bot;

void extract_sprites(void);
void extract_tiles(void);

#endif
