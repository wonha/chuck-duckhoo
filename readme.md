# Readme

## References
- [Google Style Guide](https://google.github.io/styleguide/cppguide.html)
- [Google Style Guide - Korean](http://jongwook.kim/google-styleguide/trunk/cppguide.xml)
- [BOJ](http://boj.kr/)
- [AlgoSpot JongMan](https://algospot.com/judge/problem/list/?tag=&source=%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98+%EB%AC%B8%EC%A0%9C+%ED%95%B4%EA%B2%B0+%EC%A0%84%EB%9E%B5&author=)
    - 종만북 읽으면서 이 문제들 다 풀기
- [BAEKJOON easy to hard](https://plzrun.tistory.com/entry/%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-%EB%AC%B8%EC%A0%9C%ED%92%80%EC%9D%B4PS-%EC%8B%9C%EC%9E%91%ED%95%98%EA%B8%B0)
    - 이걸 실수없이 빠른 시간안에 잘 짜야 척척 풀어나갈 수 있다.
    - 입출력 - 2557, 2741, 2742, 2739, 1924, 8393, 10818, 
        - A+B - 1000, 2558, 10950, 10951, 10952, 10953, 11021, 11022
        - String - 11718, 11719, 11720, 11721
        - 입출력 별찍기 - 2438, 2439, 2440, 2441, 2442, 2445, 2522, 2446, 10991, 10992
    - DP - 1463, 11726, 11727, 9095, 10844, 11057, 2193, 9465, 2156, 11053, 11055, 11722, 11054, 1912, 2579, 1699, 2133, 9461, 2225, 2011, 11052
    - 이런 저런 문제 - 2751, 11650, 11651, 10814, 10825, 10989, 11652, 11004, 10828, 9012, 10799, 10845, 10866, 10808, 10809, 10820, 2743, 11655, 10824, 11656, 1406, 1158, 1168, 10430, 2609, 1934, 1850, 9613, 11005, 2745, 1373, 1212, 2089, 11576, 1978, 1929, 6588, 11653, 10872, 1676, 2004
    - 그래프 - 1260, 11724, 1707, 10451, 2331, 9466, 2667, 4963, 7576, 2178, 2146, 1991, 11725, 1167, 1967
    - binary/ternary search - 1654, 2805, 2110, 10815, 10816, 11662
    - 분할정복 - 11728, 1780, 11729, 1992, 2447, 2448, 1517, 2261   
    분할정복은 DP랑 비슷한데, 부분 문제를 cache 할 필요가 없는 부분이 DP랑 다른 것 같다.
    - 그리디 - 11047, 2875, 10610, 1783, 1931, 11399, 2873, 1744
    - 완전탐색(exhaustive search) - 1476, 1107, 1451, 9095, 10819, 10971, 1697, 1963, 9019, 1525, 2251, 2186, 3108, 5014, 1759, 2580, 1987, 6603, 1182, 2003, 1806, 1644, 1261, 1208, 7453, 2632, 2143  
    완전탐색은 '말하는 대로' 구현하는 문제다.
    그냥 무식하게 구현하면 될 것 같지만, 여기서도 고수의 코드를 보면 그들의 고급진 숨결을 느낄 수 있다.  
    - 그리고 나서는 저는 개인적으로 한국정보올림피아드 초등부 지역본선/전국대회 부터 풀어보시는 걸 추천드립니다.
      그 다음으로는 중등부, 고등부 지역본선과 전국대회 문제들을 푸셔도 되고, https://www.acmicpc.net/category/17 여기서 한 개의 세부 contest를 골라서 4시간 정도 시간을 정해놓고 풀어본 다음에 http://hsin.hr/coci/ 여기서 해당 contest를 찾으면, 데이터도 다운 받을 수 있고, 해법과 공식 솔루션코드도 받아볼 수 있어요. 공부하기 상당히 좋은 것 같아요.
      어느 정도 KOI 문제들도 거의 다 푼 것 같고, COCI도 좀 많이 풀다보니 지겹다...싶으실 때는 Baltic Olympiad나 CEOI, 국내 ICPC 인터넷 예선 및 본선 문제들을 풀어보시면 될 것 같아요. 개인적으로는 구글링해서 솔루션이나 데이터를 구할 수 있는 공식 대회 문제들을 먼저 풀어보시는 게 좋을 것 같아요. 오랫동안 고민하다가 막혔을 때 질문게시판을 이용할 수도 있지만, 항상 답변이 달린다는 보장이 없으므로 혼자서 고민했다고 막힌 문제를 포기하기는 아쉽고.. 어떻게든 해결하려면 어쩔 수 없는 것 같네요.
      또 추천드리는 사이트로는 http://codeforces.com/ 가 있습니다. div1 문제들은 쉬운 게 잘 없지만, div2 문제들 중에는 쉬운 것들이 많아요. 그리고 pretest의 작은 데이터에 대해서는 틀린 데이터를 알려줍니다. 모든 문제마다 화면 오른쪽 아래를 보시면, 'Tutorial'이라는 단어가 보일텐데, 그걸 클릭하면 출제자가 적은 꽤나 친절한 해법을 볼 수 있습니다. 그리고 이 사이트의 장점으로는 해당 Regular Contest에 참여하지 않았다 하더라도, 대회 도중 다른 사람들이 맞추었던 소스코드를 볼 수 있다는 점입니다.
      더 궁금한 사항들은 http://acmicpc.slack.com/ 에 오셔서 다른 백준온라인저지 사용자들에게 물어보시는 게 좋을 것 같아요. 화이팅!
- [BOJ Slack](https://www.acmicpc.net/board/view/2788)
- [Rival](https://github.com/startFromBottom)
- 이제 종만북 보자. 1권 마지막 수치해석, 그리고 2권 읽자. 종만북 읽으면서 알고스팟 문제들 다 풀어봐야 한다.


## Couldn't understand
* Problem link: http://boj.kr/11719
