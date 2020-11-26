/**
 *  @file       styles.css
 *  @brief      The default .css file of Drafting.
 *  @author     Yiwei Chiao (ywchiao@gmail.com)
 *  @date       10/15/2020 created.
 *  @date       10/15/2020 last modified.
 *  @version    0.1.0
 *  @since      0.1.0
 *  @copyright  MIT, ? 2018 Yiwei Chiao
 *  @details
 *
 *  The default .css file of Drafting.
 */

html{
  font - size: 10px;
  height: 100vh;
}

body{
  background - color: #ffffe7;
  height: 100vh;
  margin : 0;
}

header{
  background - color: #c7c7f7;
}

nav{
  background - color: #c7f7f7;
}

/*
 * ��� nav �U���� ul �����U�� *�Ҧ�* li ����
 */
    nav > ul > li{
        display: inline - block;
        height: 2em;
        min - width: 4em;
        line - height: 2em;
        text - align: center;
        // �W�U pading: 0; ���k padding: 0.5 em;
        padding: 0px .5em;
        // �W�U pading: 0; ���k padding: 0.25 em;
        margin: 0px .25em;
        border: none;
        background - color: bisque;
}

/*
 * ��ƹ���в��� nav > ul > li �W�ɡA��� *�I���C��*
 */
    nav > ul > li:hover{
        background - color: #dfdfdf;
}

nav > ul > li:hover[id *= drop_]{
    display: block;
}

aside{
  background - color: #f7c7c7;
}

/*
article {
  background-color: #c7c7c7;
}
*/

section{
  background - color: #c7f7c7;
}

footer{
  background - color: #e7e7e7;
}

.card{
  border - radius: 12px;
  border: 1px solid azure;
  padding: .25rem .5rem;
  margin: 1rem 3rem;
  box - shadow: 3px 5px;
  background - color: #ffefcf;
  opacity: .75;
  text - align: center;
}

.card - header{
  display: flex;
  position: relative;
  line - height: 2rem;
  height: 2rem;
  margin: 0.75rem 0.25rem 0.5rem 0.25rem;
  text - align: left;
}

.card - content{
  background - color: #fffaf0;
  margin: .25rem;
  padding: 1rem 0;
  border - top: 3px solid #aaaacc;
  border - bottom: 3px solid #aaaacc;
}

.card - footer{
    /*  background-color: #f3caac; */
      background - color: #ffe3ac;
      position: relative;
      height: 2.5rem;
      margin: 0.5rem 0.25rem 0.5rem 0.25rem;
      padding: 0.25rem;
}

.ctrl - button{
  background - color: #bfc7f7;
  border - radius: 8px;
  font - size: 1.25rem;
  margin: 0.25rem 0.25rem;
  padding: 0 1rem;
}

.control - label{
  display: inline - block;
  width: 6rem;
  margin: .25rem .25rem;
}

.control{
  display: inline - block;
  width: 16rem;
  margin: .25rem .25rem;
}

.h - field{
  display: flex;
  justify - content: center;
}

.field{
  width: 16rem;
  height: 1.5rem;
  line - height: 2rem;
  margin: .25rem .25rem;
  padding: .25rem;
  background - color: #cccccc;
  border - radius: 4px;
}

.pane{
  display: flex;
  flex - flow: column;
}

/*
 * �������� container
 */
    .site - container{
      display: flex;
      flex: 1 0 auto;
      flex - direction: column;
      height: 100vh;
}

/*
 * ���کҦ������ (����) �Ŷ��� site-body
 */
    .site - body{
      display: flex;
      flex: 1 0 auto;
      flex - direction: column;
}

.site - banner{
  padding: 1rem;
}

.site - title{
  color: #4e4e5f;
  margin: 0.5rem 0.25rem;
}

.site - subtitle{
  margin: 0.25rem 0.1rem;
  padding: 0 2rem;
}

.site - status{
  background - color: #696969;
  color: #f0fff0;
  padding: 0 1rem;
}

.site - main{
  flex: 5 0 auto;
}

.site - aside{
  flex - grow: 1;
}

/*
 * �]�m�T�w�b������ site footer�C
 */
    .site - footer{
      background: MidnightBlue;
      color: SteelBlue;
      flex - shrink: 0;
      padding: .1rem .5rem;
      text - align: right;
}

/*
 * some old color;
 */

    .blacktext{
        color: #0f0f0f;
}

.redtext{
    color: #ff3333;
}

.bluetext{
    color: #3333ff;
}

.irontext{
    color: #efefaf;
}

.browntext{
    color: #9f5f5f;
}

.sectext{
    color: #7f7fef;
}

.lighttext{
    color: #9f9f7f;
}

/*
 * �U�Ԧ� (drop-down) �\���
 */
    .drop_box{
    // �w�]�����;
    display: none;
    // �h�� ul.li �����ؼХ�;
    list - style - type: none;
    // ��m���H����������;
    position: absolute;
    background - color: #f9f9f9;
    padding: 0px;
    margin: 0px .25em;
}

/*
 * �U�Ԧ��\���̪� *li* (list item)
 * ��涵���ݩʳ]�w
 */
    .drop_box ul li{
        min - width: 4em;
        text - align: center;
        padding: 0px .5em;
        margin: .25em 0px;
        border: none;
        background - color: bisque;
}

/*
 * ��ƹ���в���
 * �U�Ԧ��\���̪� *li* (list item)
 * ��涵�خɡA
 * ����ݩʳ]�w
 */
    .drop_box li : hover{
        color: DodgerBlue;
        background - color: Salmon;
}

#about{
    float: right;
    margin: 0px 2em 0px 0px;
}

/*
 * ��ƹ���в��� *����* (about) �ɡA�N
 * ������ drop_box ��ܥX��
 */
    #about:hover #drop_about{
        display: block;
}

.milky{
    background - color: #ffffea;
}

/* styles.css */