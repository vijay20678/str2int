/**
 * @作者：Vijay
 * @邮箱：qioupeng@yeah.net
 * @日期：2018-11-10
 * @公司：重庆市鲁班机器人技术研究院
 * @功能描述：字符串转长整型
 * @param                str [输入字符]
 * @return                   [输出长整型]
 */

unsigned long str2int(const char *str)
{
  unsigned long temp = 0;
  while(*str != 0)
  {
    if ((*str < '0') || (*str > '9'))  //如果当前字符不是数字
      break;
    temp = temp * 10 + (*str - '0'); //如果当前字符是数字则计算数值
    str++;      //移到下一个字符  
  }
  return temp;
}

char b[10];